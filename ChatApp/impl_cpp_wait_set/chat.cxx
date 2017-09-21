

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from chat.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "chat.h"

#include <new>

namespace My {

    /* ========================================================================= */
    const char *ChatObjectTYPENAME = "My::ChatObject";

    DDS_TypeCode* ChatObject_get_typecode()
    {
        static RTIBool is_initialized = RTI_FALSE;

        static DDS_TypeCode ChatObject_g_tc_msg_string = DDS_INITIALIZE_STRING_TYPECODE(((My::MSG_LEN)));
        static DDS_TypeCode_Member ChatObject_g_tc_members[1]=
        {

            {
                (char *)"msg",/* Member name */
                {
                    0,/* Representation ID */          
                    DDS_BOOLEAN_FALSE,/* Is a pointer? */
                    -1, /* Bitfield bits */
                    NULL/* Member type code is assigned later */
                },
                0, /* Ignored */
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                DDS_PUBLIC_MEMBER,/* Member visibility */
                1,
                NULL/* Ignored */
            }
        };

        static DDS_TypeCode ChatObject_g_tc =
        {{
                DDS_TK_STRUCT,/* Kind */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /*Ignored*/
                (char *)"My::ChatObject", /* Name */
                NULL, /* Ignored */      
                0, /* Ignored */
                0, /* Ignored */
                NULL, /* Ignored */
                1, /* Number of members */
                ChatObject_g_tc_members, /* Members */
                DDS_VM_NONE  /* Ignored */         
            }}; /* Type code for ChatObject*/

        if (is_initialized) {
            return &ChatObject_g_tc;
        }

        ChatObject_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ChatObject_g_tc_msg_string;

        is_initialized = RTI_TRUE;

        return &ChatObject_g_tc;
    }

    RTIBool ChatObject_initialize(
        ChatObject* sample) {
        return My::ChatObject_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
    }

    RTIBool ChatObject_initialize_ex(
        ChatObject* sample,RTIBool allocatePointers, RTIBool allocateMemory)
    {

        struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

        allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
        allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

        return My::ChatObject_initialize_w_params(
            sample,&allocParams);

    }

    RTIBool ChatObject_initialize_w_params(
        ChatObject* sample, const struct DDS_TypeAllocationParams_t * allocParams)
    {

        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (allocParams == NULL) {
            return RTI_FALSE;
        }

        if (allocParams->allocate_memory){
            sample->msg= DDS_String_alloc (((My::MSG_LEN)));
            if (sample->msg == NULL) {
                return RTI_FALSE;
            }

        } else {
            if (sample->msg!= NULL) { 
                sample->msg[0] = '\0';
            }
        }

        return RTI_TRUE;
    }

    void ChatObject_finalize(
        ChatObject* sample)
    {

        My::ChatObject_finalize_ex(sample,RTI_TRUE);
    }

    void ChatObject_finalize_ex(
        ChatObject* sample,RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

        if (sample==NULL) {
            return;
        } 

        deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

        My::ChatObject_finalize_w_params(
            sample,&deallocParams);
    }

    void ChatObject_finalize_w_params(
        ChatObject* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
    {

        if (sample==NULL) {
            return;
        }

        if (deallocParams == NULL) {
            return;
        }

        if (sample->msg != NULL) {
            DDS_String_free(sample->msg);
            sample->msg=NULL;

        }
    }

    void ChatObject_finalize_optional_members(
        ChatObject* sample, RTIBool deletePointers)
    {
        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (sample==NULL) {
            return;
        } 
        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    }

    RTIBool ChatObject_copy(
        ChatObject* dst,
        const ChatObject* src)
    {
        try {

            if (dst == NULL || src == NULL) {
                return RTI_FALSE;
            }

            if (!RTICdrType_copyStringEx (
                &dst->msg, src->msg, 
                ((My::MSG_LEN)) + 1, RTI_FALSE)){
                return RTI_FALSE;
            }

            return RTI_TRUE;

        } catch (std::bad_alloc&) {
            return RTI_FALSE;
        }
    }

    /**
    * <<IMPLEMENTATION>>
    *
    * Defines:  TSeq, T
    *
    * Configure and implement 'ChatObject' sequence class.
    */
    #define T ChatObject
    #define TSeq ChatObjectSeq

    #define T_initialize_w_params My::ChatObject_initialize_w_params

    #define T_finalize_w_params   My::ChatObject_finalize_w_params
    #define T_copy       My::ChatObject_copy

    #ifndef NDDS_STANDALONE_TYPE
    #include "dds_c/generic/dds_c_sequence_TSeq.gen"
    #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
    #else
    #include "dds_c_sequence_TSeq.gen"
    #include "dds_cpp_sequence_TSeq.gen"
    #endif

    #undef T_copy
    #undef T_finalize_w_params

    #undef T_initialize_w_params

    #undef TSeq
    #undef T
} /* namespace My  */

