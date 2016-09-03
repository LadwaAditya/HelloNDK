#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_aditya_hellondk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

jstring
Java_com_example_aditya_hellondk_MainActivity_stringAnother(JNIEnv *env, jobject) {
    std::string anotherString = "The code is changed now";
    return env->NewStringUTF(anotherString.c_str());
}
