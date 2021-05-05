#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
    CURL* curl;
    CURLcode res;
    char postdata[100], name[20], project[40];
    printf("Enter your name: ");
    scanf_s("%s", name);
    printf("Enter your project: ");
    scanf_s("%s", project);
    sprintf(postdata, "name=%s&project=%s", name, project);

    curl_global_init(CURL_GLOBAL_ALL);

    
    curl = curl_easy_init();
    if (curl) {

        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2000593/testpost.php");
        
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);

        res = curl_easy_perform(curl);
        
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return 0;
}