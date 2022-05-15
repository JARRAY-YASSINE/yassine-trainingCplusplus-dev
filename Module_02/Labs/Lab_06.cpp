#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <errno.h>

//--- SSL Library Stub ---
#define SSL_MAX_SSL_SESSION_ID_LENGTH 32

typedef enum 
{
    METHOD_UNKNOWN = 0,
    METHOD_SSL_V3,
    METHOD_DTLS_V2  
} SSL_METHOD;

typedef struct 
{
    int length;
    unsigned char* public_key;
} X509;

typedef struct 
{
    int ssl_version;
    SSL_METHOD method;
    unsigned char session_id[SSL_MAX_SSL_SESSION_ID_LENGTH];
    long timeout;
    X509* peer;
} SSL_CTX;

void generate_session_id(unsigned char* sid) 
{
    srand(time(0));
    for(int i=0; i<SSL_MAX_SSL_SESSION_ID_LENGTH; i++) 
    {
        sid[i] = 'a' + rand()%26;
    }
}

void print_session_id(unsigned char* sid) 
{
    printf("Session id: ");
    for(int i=0; i<SSL_MAX_SSL_SESSION_ID_LENGTH; i++) 
    {
        printf("%c", sid[i]);
    }
    printf("\n");
}

SSL_CTX* SSL_CTX_new(SSL_METHOD method) 
{
    SSL_CTX *ctx = NULL;
    if(method == METHOD_UNKNOWN) 
    {
        printf("Failed: Unknown Method\n");
        throw "Unknow Method";
    }

    ctx = (SSL_CTX*) malloc(sizeof(SSL_CTX));
    if(ctx == NULL) 
    {
        printf("Failed: Not enough memory\n");
        throw "Not enough memory";
    }

    ctx->peer = (X509*) malloc(sizeof(X509));
    if(ctx->peer == NULL) 
    {
        printf("Failed: Not enough memory\n");
        free(ctx);
        throw "Not enough memory";
    }
    ctx->ssl_version = 3;
    ctx->method = method;
    generate_session_id(ctx->session_id);
    ctx->timeout = 100;
    return ctx;
}

void SSL_free(SSL_CTX* ctx)
{
    if(ctx == NULL) 
    {
        return;
    }
    free(ctx->peer);
    free(ctx);
}

const int SSL_connect(SSL_CTX* ctx) 
{
    if(ctx == NULL) 
    {
        printf("SSL context is NULL\n");
        throw "Context is null";
    }
    print_session_id(ctx->session_id);
    printf("Connected\n");
    return 0;
}

const int record_send(unsigned char* session_id, const void *buf, int len) 
{
    print_session_id(session_id);
    printf("Send <%s>\n", buf);
    return 0;
}

void SSL_unsafe_write(SSL_CTX* ctx, const void *buf, int len)
{
    int ret;
    
    ret = record_send(ctx->session_id, buf, len);
    if(ret < 0) 
    {
        printf("Failed: Cannot send data\n");
        throw "Data not sent";
    }
    printf("Data sent\n");
}
//---
class SSLClient
{
    public:
        SSLClient(SSL_METHOD method)
        {
            printf("\t[1] Create new SSL context\n");
            ctx = SSL_CTX_new(method);
        }

        void connect()
        {
            printf("\t[2] Connect\n");
            SSL_connect(ctx);
        }

        void write(const void *buf, int len)
        {
            printf("\t[3] Write\n");
            SSL_unsafe_write(ctx, buf, len);
        }

        ~SSLClient()
        {
            printf("\t[4] Clean up resources\n");
            SSL_free(ctx);
        }
    private:    
        SSL_CTX* ctx = nullptr;
};

int main()
{
    SSLClient client = SSLClient(METHOD_UNKNOWN);
    client.connect();
    client.write("Hello", 5);
}