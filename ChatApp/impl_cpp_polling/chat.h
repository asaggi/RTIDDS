

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from chat.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef chat_1436264351_h
#define chat_1436264351_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace My {
    static const DDS_Long MSG_LEN= 256;

    extern const char *ChatObjectTYPENAME;

    struct ChatObjectSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ChatObjectTypeSupport;
    class ChatObjectDataWriter;
    class ChatObjectDataReader;
    #endif

    class ChatObject 
    {
      public:
        typedef struct ChatObjectSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ChatObjectTypeSupport TypeSupport;
        typedef ChatObjectDataWriter DataWriter;
        typedef ChatObjectDataReader DataReader;
        #endif

        DDS_Char *   msg ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    NDDSUSERDllExport DDS_TypeCode* ChatObject_get_typecode(void); /* Type code */

    DDS_SEQUENCE(ChatObjectSeq, ChatObject);

    NDDSUSERDllExport
    RTIBool ChatObject_initialize(
        ChatObject* self);

    NDDSUSERDllExport
    RTIBool ChatObject_initialize_ex(
        ChatObject* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ChatObject_initialize_w_params(
        ChatObject* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    void ChatObject_finalize(
        ChatObject* self);

    NDDSUSERDllExport
    void ChatObject_finalize_ex(
        ChatObject* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ChatObject_finalize_w_params(
        ChatObject* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ChatObject_finalize_optional_members(
        ChatObject* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ChatObject_copy(
        ChatObject* dst,
        const ChatObject* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_Char * CHAT_TOPIC_NAME= "Chat";
} /* namespace My  */

#endif /* chat */

