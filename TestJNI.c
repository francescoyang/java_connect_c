    #include <stdio.h>
        #include "TestJNI.h"
        int i=0;
        JNIEXPORT void JNICALL Java_TestJNI_set
          (JNIEnv * env, jobject obj, jint j)
        {
           i=j;
        
        }
        
        JNIEXPORT jint JNICALL Java_TestJNI_get
          (JNIEnv * env, jobject obj)
        {
          return i;
        }
