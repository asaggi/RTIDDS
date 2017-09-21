

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from chat.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef chatPlugin_1436264351_h
#define chatPlugin_1436264351_h

#include "chat.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace My {

    #define ChatObjectPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define ChatObjectPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ChatObjectPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define ChatObjectPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ChatObjectPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ChatObject*
    ChatObjectPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ChatObject*
    ChatObjectPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ChatObject*
    ChatObjectPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ChatObjectPluginSupport_copy_data(
        ChatObject *out,
        const ChatObject *in);

    NDDSUSERDllExport extern void 
    ChatObjectPluginSupport_destroy_data_w_params(
        ChatObject *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ChatObjectPluginSupport_destroy_data_ex(
        ChatObject *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ChatObjectPluginSupport_destroy_data(
        ChatObject *sample);

    NDDSUSERDllExport extern void 
    ChatObjectPluginSupport_print_data(
        const ChatObject *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ChatObjectPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ChatObjectPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ChatObjectPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ChatObjectPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ChatObjectPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ChatObject *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ChatObjectPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ChatObject *out,
        const ChatObject *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ChatObjectPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const ChatObject *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ChatObjectPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        ChatObject *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ChatObjectPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ChatObject *sample); 

    NDDSUSERDllExport extern RTIBool 
    ChatObjectPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ChatObject **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ChatObjectPlugin_deserialize_from_cdr_buffer(
        ChatObject *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ChatObjectPlugin_data_to_string(
        const ChatObject *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    ChatObjectPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    ChatObjectPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    ChatObjectPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ChatObjectPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    ChatObjectPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const ChatObject * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ChatObjectPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ChatObjectPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ChatObjectPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ChatObjectPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const ChatObject *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ChatObjectPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        ChatObject * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ChatObjectPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ChatObject ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ChatObjectPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ChatObject *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ChatObjectPlugin_new(void);

    NDDSUSERDllExport extern void
    ChatObjectPlugin_delete(struct PRESTypePlugin *);

} /* namespace My  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* chatPlugin_1436264351_h */

