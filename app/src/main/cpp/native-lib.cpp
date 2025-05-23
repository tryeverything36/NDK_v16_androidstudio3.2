#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring


Java_com_ndktest_ndktest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++, David";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring
Java_com_ndktest_ndktest_MainActivity_stringFromJNI2(
        JNIEnv *env,
jobject /* this */) {
std::string hello = "Hello from C++, New JNI";
return env->NewStringUTF(hello.c_str());
}
