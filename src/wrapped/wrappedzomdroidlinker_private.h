#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

GO(zomdroid_jni_GetVersion, iFp)
GO(zomdroid_jni_DefineClass, pFppppi)
GO(zomdroid_jni_FindClass, pFpp)
GO(zomdroid_jni_FromReflectedMethod, pFpp)
GO(zomdroid_jni_FromReflectedField, pFpp)
GO(zomdroid_jni_ToReflectedMethod, pFpppC)
GO(zomdroid_jni_GetSuperclass, pFpp)
GO(zomdroid_jni_IsAssignableFrom, CFppp)
GO(zomdroid_jni_ToReflectedField, pFpppC)
GO(zomdroid_jni_Throw, iFpp)
GO(zomdroid_jni_ThrowNew, iFppp)
GO(zomdroid_jni_ExceptionOccurred, pFp)
GO(zomdroid_jni_ExceptionDescribe, vFp)
GO(zomdroid_jni_ExceptionClear, vFp)
GO(zomdroid_jni_FatalError, vFpp)
GO(zomdroid_jni_PushLocalFrame, iFpi)
GO(zomdroid_jni_PopLocalFrame, pFpp)
GO(zomdroid_jni_NewGlobalRef, pFpp)
GO(zomdroid_jni_DeleteGlobalRef, vFpp)
GO(zomdroid_jni_DeleteLocalRef, vFpp)
GO(zomdroid_jni_IsSameObject, CFppp)
GO(zomdroid_jni_NewLocalRef, pFpp)
GO(zomdroid_jni_EnsureLocalCapacity, iFpi)
GO(zomdroid_jni_AllocObject, pFpp)
GO(zomdroid_jni_NewObjectV, pFpppA)
GO(zomdroid_jni_NewObjectA, pFpppp)
GO(zomdroid_jni_GetObjectClass, pFpp)
GO(zomdroid_jni_IsInstanceOf, CFppp)
GO(zomdroid_jni_GetMethodID, pFpppp)
GO(zomdroid_jni_CallObjectMethodV, pFpppA)
GO(zomdroid_jni_CallObjectMethodA, pFpppp)
GO(zomdroid_jni_CallBooleanMethodV, CFpppA)
GO(zomdroid_jni_CallBooleanMethodA, CFpppp)
GO(zomdroid_jni_CallByteMethodV, cFpppA)
GO(zomdroid_jni_CallByteMethodA, cFpppp)
GO(zomdroid_jni_CallCharMethodV, WFpppA)
GO(zomdroid_jni_CallCharMethodA, WFpppp)
GO(zomdroid_jni_CallShortMethodV, wFpppA)
GO(zomdroid_jni_CallShortMethodA, wFpppp)
GO(zomdroid_jni_CallIntMethodV, iFpppA)
GO(zomdroid_jni_CallIntMethodA, iFpppp)
GO(zomdroid_jni_CallLongMethodV, IFpppA)
GO(zomdroid_jni_CallLongMethodA, IFpppp)
GO(zomdroid_jni_CallFloatMethodV, fFpppA)
GO(zomdroid_jni_CallFloatMethodA, fFpppp)
GO(zomdroid_jni_CallDoubleMethodV, dFpppA)
GO(zomdroid_jni_CallDoubleMethodA, dFpppp)
GO(zomdroid_jni_CallVoidMethodV, vFpppA)
GO(zomdroid_jni_CallVoidMethodA, vFpppp)
GO(zomdroid_jni_CallNonvirtualObjectMethodV, pFppppA)
GO(zomdroid_jni_CallNonvirtualObjectMethodA, pFppppp)
GO(zomdroid_jni_CallNonvirtualBooleanMethodV, CFppppA)
GO(zomdroid_jni_CallNonvirtualBooleanMethodA, CFppppp)
GO(zomdroid_jni_CallNonvirtualByteMethodV, cFppppA)
GO(zomdroid_jni_CallNonvirtualByteMethodA, cFppppp)
GO(zomdroid_jni_CallNonvirtualCharMethodV, WFppppA)
GO(zomdroid_jni_CallNonvirtualCharMethodA, WFppppp)
GO(zomdroid_jni_CallNonvirtualShortMethodV, wFppppA)
GO(zomdroid_jni_CallNonvirtualShortMethodA, wFppppp)
GO(zomdroid_jni_CallNonvirtualIntMethodV, iFppppA)
GO(zomdroid_jni_CallNonvirtualIntMethodA, iFppppp)
GO(zomdroid_jni_CallNonvirtualLongMethodV, IFppppA)
GO(zomdroid_jni_CallNonvirtualLongMethodA, IFppppp)
GO(zomdroid_jni_CallNonvirtualFloatMethodV, fFppppA)
GO(zomdroid_jni_CallNonvirtualFloatMethodA, fFppppp)
GO(zomdroid_jni_CallNonvirtualDoubleMethodV, dFppppA)
GO(zomdroid_jni_CallNonvirtualDoubleMethodA, dFppppp)
GO(zomdroid_jni_CallNonvirtualVoidMethodV, vFppppA)
GO(zomdroid_jni_CallNonvirtualVoidMethodA, vFppppp)
GO(zomdroid_jni_GetFieldID, pFpppp)
GO(zomdroid_jni_GetObjectField, pFppp)
GO(zomdroid_jni_GetBooleanField, CFppp)
GO(zomdroid_jni_GetByteField, cFppp)
GO(zomdroid_jni_GetCharField, WFppp)
GO(zomdroid_jni_GetShortField, wFppp)
GO(zomdroid_jni_GetIntField, iFppp)
GO(zomdroid_jni_GetLongField, IFppp)
GO(zomdroid_jni_GetFloatField, fFppp)
GO(zomdroid_jni_GetDoubleField, dFppp)
GO(zomdroid_jni_SetObjectField, vFpppp)
GO(zomdroid_jni_SetBooleanField, vFpppC)
GO(zomdroid_jni_SetByteField, vFpppc)
GO(zomdroid_jni_SetCharField, vFpppW)
GO(zomdroid_jni_SetShortField, vFpppw)
GO(zomdroid_jni_SetIntField, vFpppi)
GO(zomdroid_jni_SetLongField, vFpppI)
GO(zomdroid_jni_SetFloatField, vFpppf)
GO(zomdroid_jni_SetDoubleField, vFpppd)
GO(zomdroid_jni_GetStaticMethodID, pFpppp)
GO(zomdroid_jni_CallStaticObjectMethodV, pFpppA)
GO(zomdroid_jni_CallStaticObjectMethodA, pFpppp)
GO(zomdroid_jni_CallStaticBooleanMethodV, CFpppA)
GO(zomdroid_jni_CallStaticBooleanMethodA, CFpppp)
GO(zomdroid_jni_CallStaticByteMethodV, cFpppA)
GO(zomdroid_jni_CallStaticByteMethodA, cFpppp)
GO(zomdroid_jni_CallStaticCharMethodV, WFpppA)
GO(zomdroid_jni_CallStaticCharMethodA, WFpppp)
GO(zomdroid_jni_CallStaticShortMethodV, wFpppA)
GO(zomdroid_jni_CallStaticShortMethodA, wFpppp)
GO(zomdroid_jni_CallStaticIntMethodV, iFpppA)
GO(zomdroid_jni_CallStaticIntMethodA, iFpppp)
GO(zomdroid_jni_CallStaticLongMethodV, IFpppA)
GO(zomdroid_jni_CallStaticLongMethodA, IFpppp)
GO(zomdroid_jni_CallStaticFloatMethodV, fFpppA)
GO(zomdroid_jni_CallStaticFloatMethodA, fFpppp)
GO(zomdroid_jni_CallStaticDoubleMethodV, dFpppA)
GO(zomdroid_jni_CallStaticDoubleMethodA, dFpppp)
GO(zomdroid_jni_CallStaticVoidMethodV, vFpppA)
GO(zomdroid_jni_CallStaticVoidMethodA, vFpppp)
GO(zomdroid_jni_GetStaticFieldID, pFpppp)
GO(zomdroid_jni_GetStaticObjectField, pFppp)
GO(zomdroid_jni_GetStaticBooleanField, CFppp)
GO(zomdroid_jni_GetStaticByteField, cFppp)
GO(zomdroid_jni_GetStaticCharField, WFppp)
GO(zomdroid_jni_GetStaticShortField, wFppp)
GO(zomdroid_jni_GetStaticIntField, iFppp)
GO(zomdroid_jni_GetStaticLongField, IFppp)
GO(zomdroid_jni_GetStaticFloatField, fFppp)
GO(zomdroid_jni_GetStaticDoubleField, dFppp)
GO(zomdroid_jni_SetStaticObjectField, vFpppp)
GO(zomdroid_jni_SetStaticBooleanField, vFpppC)
GO(zomdroid_jni_SetStaticByteField, vFpppc)
GO(zomdroid_jni_SetStaticCharField, vFpppW)
GO(zomdroid_jni_SetStaticShortField, vFpppw)
GO(zomdroid_jni_SetStaticIntField, vFpppi)
GO(zomdroid_jni_SetStaticLongField, vFpppI)
GO(zomdroid_jni_SetStaticFloatField, vFpppf)
GO(zomdroid_jni_SetStaticDoubleField, vFpppd)
GO(zomdroid_jni_NewString, pFppi)
GO(zomdroid_jni_GetStringLength, iFpp)
GO(zomdroid_jni_GetStringChars, pFppp)
GO(zomdroid_jni_ReleaseStringChars, vFppp)
GO(zomdroid_jni_NewStringUTF, pFpp)
GO(zomdroid_jni_GetStringUTFLength, iFpp)
GO(zomdroid_jni_GetStringUTFChars, pFppp)
GO(zomdroid_jni_ReleaseStringUTFChars, vFppp)
GO(zomdroid_jni_GetArrayLength, iFpp)
GO(zomdroid_jni_NewObjectArray, pFpipp)
GO(zomdroid_jni_GetObjectArrayElement, pFppi)
GO(zomdroid_jni_SetObjectArrayElement, vFppip)
GO(zomdroid_jni_NewBooleanArray, pFpi)
GO(zomdroid_jni_NewByteArray, pFpi)
GO(zomdroid_jni_NewCharArray, pFpi)
GO(zomdroid_jni_NewShortArray, pFpi)
GO(zomdroid_jni_NewIntArray, pFpi)
GO(zomdroid_jni_NewLongArray, pFpi)
GO(zomdroid_jni_NewFloatArray, pFpi)
GO(zomdroid_jni_NewDoubleArray, pFpi)
GO(zomdroid_jni_GetBooleanArrayElements, pFppp)
GO(zomdroid_jni_GetByteArrayElements, pFppp)
GO(zomdroid_jni_GetCharArrayElements, pFppp)
GO(zomdroid_jni_GetShortArrayElements, pFppp)
GO(zomdroid_jni_GetIntArrayElements, pFppp)
GO(zomdroid_jni_GetLongArrayElements, pFppp)
GO(zomdroid_jni_GetFloatArrayElements, pFppp)
GO(zomdroid_jni_GetDoubleArrayElements, pFppp)
GO(zomdroid_jni_ReleaseBooleanArrayElements, vFpppi)
GO(zomdroid_jni_ReleaseByteArrayElements, vFpppi)
GO(zomdroid_jni_ReleaseCharArrayElements, vFpppi)
GO(zomdroid_jni_ReleaseShortArrayElements, vFpppi)
GO(zomdroid_jni_ReleaseIntArrayElements, vFpppi)
GO(zomdroid_jni_ReleaseLongArrayElements, vFpppi)
GO(zomdroid_jni_ReleaseFloatArrayElements, vFpppi)
GO(zomdroid_jni_ReleaseDoubleArrayElements, vFpppi)
GO(zomdroid_jni_GetBooleanArrayRegion, vFppiip)
GO(zomdroid_jni_GetByteArrayRegion, vFppiip)
GO(zomdroid_jni_GetCharArrayRegion, vFppiip)
GO(zomdroid_jni_GetShortArrayRegion, vFppiip)
GO(zomdroid_jni_GetIntArrayRegion, vFppiip)
GO(zomdroid_jni_GetLongArrayRegion, vFppiip)
GO(zomdroid_jni_GetFloatArrayRegion, vFppiip)
GO(zomdroid_jni_GetDoubleArrayRegion, vFppiip)
GO(zomdroid_jni_SetBooleanArrayRegion, vFppiip)
GO(zomdroid_jni_SetByteArrayRegion, vFppiip)
GO(zomdroid_jni_SetCharArrayRegion, vFppiip)
GO(zomdroid_jni_SetShortArrayRegion, vFppiip)
GO(zomdroid_jni_SetIntArrayRegion, vFppiip)
GO(zomdroid_jni_SetLongArrayRegion, vFppiip)
GO(zomdroid_jni_SetFloatArrayRegion, vFppiip)
GO(zomdroid_jni_SetDoubleArrayRegion, vFppiip)
GO(zomdroid_jni_RegisterNatives, iFpppi)
GO(zomdroid_jni_UnregisterNatives, iFpp)
GO(zomdroid_jni_MonitorEnter, iFpp)
GO(zomdroid_jni_MonitorExit, iFpp)
GO(zomdroid_jni_GetJavaVM, iFpp)
GO(zomdroid_jni_GetStringRegion, vFppiip)
GO(zomdroid_jni_GetStringUTFRegion, vFppiip)
GO(zomdroid_jni_GetPrimitiveArrayCritical, pFppp)
GO(zomdroid_jni_ReleasePrimitiveArrayCritical, vFpppi)
GO(zomdroid_jni_GetStringCritical, pFppp)
GO(zomdroid_jni_ReleaseStringCritical, vFppp)
GO(zomdroid_jni_NewWeakGlobalRef, pFpp)
GO(zomdroid_jni_DeleteWeakGlobalRef, vFpp)
GO(zomdroid_jni_ExceptionCheck, CFp)
GO(zomdroid_jni_NewDirectByteBuffer, pFppI)
GO(zomdroid_jni_GetDirectBufferAddress, pFpp)
GO(zomdroid_jni_GetDirectBufferCapacity, IFpp)
GO(zomdroid_jni_GetObjectRefType, uFpp)
GO(zomdroid_jni_GetModule, pFpp)
GO(zomdroid_jni_DestroyJavaVM, iFp)
GO(zomdroid_jni_AttachCurrentThread, iFppp)
GO(zomdroid_jni_DetachCurrentThread, iFp)
GO(zomdroid_jni_GetEnv, iFppi)
GO(zomdroid_jni_AttachCurrentThreadAsDaemon, iFppp)
