/*****************************************************************************
 * %A%
 *****************************************************************************/

/*****************************************************************************/
/** @file common/api/n8_pub_enums.c
 *  @brief Generated file for converting enum values to text.
 *
 * This file generated by genEnumText.py.  Do not edit by hand.
 *
 *****************************************************************************/

/*****************************************************************************
 * Revision history:
 * 03/02/04 ---   Generated.
 ****************************************************************************/

#include "n8_pub_enums.h"

/*****************************************************************************/
const char * N8_Hardware_t_text(const N8_Hardware_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_NSP2000_HW:
         ret = "N8_NSP2000_HW";
         break;
      case N8_BM:
         ret = "N8_BM";
         break;
      case N8_FPGA:
         ret = "N8_FPGA";
         break;
      default:
         ret = "Invalid enumeration value for N8_Hardware_t";
   }

   return ret;
}   /* N8_Hardware_t_text */

/*****************************************************************************/
const char * N8_QueueStatusCodes_t_text(const N8_QueueStatusCodes_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_QUEUE_REQUEST_SENT_FROM_API:
         ret = "N8_QUEUE_REQUEST_SENT_FROM_API";
         break;
      case N8_QUEUE_REQUEST_QUEUED:
         ret = "N8_QUEUE_REQUEST_QUEUED";
         break;
      case N8_QUEUE_REQUEST_FINISHED:
         ret = "N8_QUEUE_REQUEST_FINISHED";
         break;
      case N8_QUEUE_REQUEST_COMMAND_ERROR:
         ret = "N8_QUEUE_REQUEST_COMMAND_ERROR";
         break;
      default:
         ret = "Invalid enumeration value for N8_QueueStatusCodes_t";
   }

   return ret;
}   /* N8_QueueStatusCodes_t_text */

/*****************************************************************************/
const char * N8_Status_t_text(const N8_Status_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_STATUS_OK:
         ret = "N8_STATUS_OK";
         break;
      case N8_EVENT_COMPLETE:
         ret = "N8_EVENT_COMPLETE";
         break;
      case N8_EVENT_INCOMPLETE:
         ret = "N8_EVENT_INCOMPLETE";
         break;
      case N8_INVALID_INPUT_SIZE:
         ret = "N8_INVALID_INPUT_SIZE";
         break;
      case N8_INVALID_OUTPUT_SIZE:
         ret = "N8_INVALID_OUTPUT_SIZE";
         break;
      case N8_INVALID_ENUM:
         ret = "N8_INVALID_ENUM";
         break;
      case N8_INVALID_PARAMETER:
         ret = "N8_INVALID_PARAMETER";
         break;
      case N8_INVALID_OBJECT:
         ret = "N8_INVALID_OBJECT";
         break;
      case N8_INVALID_KEY:
         ret = "N8_INVALID_KEY";
         break;
      case N8_INVALID_KEY_SIZE:
         ret = "N8_INVALID_KEY_SIZE";
         break;
      case N8_INVALID_PROTOCOL:
         ret = "N8_INVALID_PROTOCOL";
         break;
      case N8_INVALID_CIPHER:
         ret = "N8_INVALID_CIPHER";
         break;
      case N8_INVALID_HASH:
         ret = "N8_INVALID_HASH";
         break;
      case N8_INVALID_VALUE:
         ret = "N8_INVALID_VALUE";
         break;
      case N8_INVALID_VERSION:
         ret = "N8_INVALID_VERSION";
         break;
      case N8_INCONSISTENT:
         ret = "N8_INCONSISTENT";
         break;
      case N8_NOT_INITIALIZED:
         ret = "N8_NOT_INITIALIZED";
         break;
      case N8_UNALLOCATED_CONTEXT:
         ret = "N8_UNALLOCATED_CONTEXT";
         break;
      case N8_NO_MORE_RESOURCE:
         ret = "N8_NO_MORE_RESOURCE";
         break;
      case N8_HARDWARE_ERROR:
         ret = "N8_HARDWARE_ERROR";
         break;
      case N8_UNEXPECTED_ERROR:
         ret = "N8_UNEXPECTED_ERROR";
         break;
      case N8_UNIMPLEMENTED_FUNCTION:
         ret = "N8_UNIMPLEMENTED_FUNCTION";
         break;
      case N8_MALLOC_FAILED:
         ret = "N8_MALLOC_FAILED";
         break;
      case N8_WEAK_KEY:
         ret = "N8_WEAK_KEY";
         break;
      case N8_VERIFICATION_FAILED:
         ret = "N8_VERIFICATION_FAILED";
         break;
      case N8_ALREADY_INITIALIZED:
         ret = "N8_ALREADY_INITIALIZED";
         break;
      case N8_FILE_ERROR:
         ret = "N8_FILE_ERROR";
         break;
      case N8_STATUS_ATTACH_OK:
         ret = "N8_STATUS_ATTACH_OK";
         break;
      case N8_QUEUE_ERROR:
         ret = "N8_QUEUE_ERROR";
         break;
      case N8_INVALID_UNIT:
         ret = "N8_INVALID_UNIT";
         break;
      case N8_UNALIGNED_ADDRESS:
         ret = "N8_UNALIGNED_ADDRESS";
         break;
      case N8_QUEUE_FULL:
         ret = "N8_QUEUE_FULL";
         break;
      case N8_INVALID_DRIVER_VERSION:
         ret = "N8_INVALID_DRIVER_VERSION";
         break;
      case N8_HARDWARE_UNAVAILABLE:
         ret = "N8_HARDWARE_UNAVAILABLE";
         break;
      case N8_API_QUEUE_FULL:
         ret = "N8_API_QUEUE_FULL";
         break;
      case N8_RNG_QUEUE_EMPTY:
         ret = "N8_RNG_QUEUE_EMPTY";
         break;
      case N8_TIMEOUT:
         ret = "N8_TIMEOUT";
         break;
      case N8_INCOMPATIBLE_OPEN:
         ret = "N8_INCOMPATIBLE_OPEN";
         break;
      case N8_EVENT_ALLOC_FAILED:
         ret = "N8_EVENT_ALLOC_FAILED";
         break;
      case N8_THREAD_INIT_FAILED:
         ret = "N8_THREAD_INIT_FAILED";
         break;
      case N8_EVENT_QUEUE_FULL:
         ret = "N8_EVENT_QUEUE_FULL";
         break;
      default:
         ret = "Invalid enumeration value for N8_Status_t";
   }

   return ret;
}   /* N8_Status_t_text */

/*****************************************************************************/
const char * N8_HashProtocol_t_text(const N8_HashProtocol_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_TLS_FINISH:
         ret = "N8_TLS_FINISH";
         break;
      case N8_TLS_CERT:
         ret = "N8_TLS_CERT";
         break;
      case N8_SSL_FINISH:
         ret = "N8_SSL_FINISH";
         break;
      case N8_SSL_CERT:
         ret = "N8_SSL_CERT";
         break;
      default:
         ret = "Invalid enumeration value for N8_HashProtocol_t";
   }

   return ret;
}   /* N8_HashProtocol_t_text */

/*****************************************************************************/
const char * N8_SKSKeyType_t_text(const N8_SKSKeyType_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_RSA_VERSION_1_KEY:
         ret = "N8_RSA_VERSION_1_KEY";
         break;
      case N8_DSA_VERSION_1_KEY:
         ret = "N8_DSA_VERSION_1_KEY";
         break;
      default:
         ret = "Invalid enumeration value for N8_SKSKeyType_t";
   }

   return ret;
}   /* N8_SKSKeyType_t_text */

/*****************************************************************************/
const char * N8_Cipher_t_text(const N8_Cipher_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_CIPHER_ARC4:
         ret = "N8_CIPHER_ARC4";
         break;
      case N8_CIPHER_DES:
         ret = "N8_CIPHER_DES";
         break;
      default:
         ret = "Invalid enumeration value for N8_Cipher_t";
   }

   return ret;
}   /* N8_Cipher_t_text */

/*****************************************************************************/
const char * N8_Component_t_text(const N8_Component_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_PKP:
         ret = "N8_PKP";
         break;
      case N8_RNG:
         ret = "N8_RNG";
         break;
      case N8_EA:
         ret = "N8_EA";
         break;
      case N8_NUM_COMPONENTS:
         ret = "N8_NUM_COMPONENTS";
         break;
      default:
         ret = "Invalid enumeration value for N8_Component_t";
   }

   return ret;
}   /* N8_Component_t_text */

/*****************************************************************************/
const char * N8_KeyType_t_text(const N8_KeyType_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_PUBLIC:
         ret = "N8_PUBLIC";
         break;
      case N8_PRIVATE:
         ret = "N8_PRIVATE";
         break;
      case N8_PRIVATE_CRT:
         ret = "N8_PRIVATE_CRT";
         break;
      case N8_PRIVATE_SKS:
         ret = "N8_PRIVATE_SKS";
         break;
      default:
         ret = "Invalid enumeration value for N8_KeyType_t";
   }

   return ret;
}   /* N8_KeyType_t_text */

/*****************************************************************************/
const char * N8_HashRole_t_text(const N8_HashRole_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_SERVER:
         ret = "N8_SERVER";
         break;
      case N8_CLIENT:
         ret = "N8_CLIENT";
         break;
      default:
         ret = "Invalid enumeration value for N8_HashRole_t";
   }

   return ret;
}   /* N8_HashRole_t_text */

/*****************************************************************************/
const char * N8_Parameter_t_text(const N8_Parameter_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_EACOUNT:
         ret = "N8_EACOUNT";
         break;
      case N8_EATYPE:
         ret = "N8_EATYPE";
         break;
      case N8_PKCOUNT:
         ret = "N8_PKCOUNT";
         break;
      case N8_PKTYPE:
         ret = "N8_PKTYPE";
         break;
      case N8_HPCOUNT:
         ret = "N8_HPCOUNT";
         break;
      case N8_HPTYPE:
         ret = "N8_HPTYPE";
         break;
      case N8_HARDWAREVERSION:
         ret = "N8_HARDWAREVERSION";
         break;
      case N8_SOFTWAREVERSION:
         ret = "N8_SOFTWAREVERSION";
         break;
      case N8_CONTEXTMEMSIZE:
         ret = "N8_CONTEXTMEMSIZE";
         break;
      case N8_SKSMEMSIZE:
         ret = "N8_SKSMEMSIZE";
         break;
      case N8_NUMBEROFCHIPS:
         ret = "N8_NUMBEROFCHIPS";
         break;
      case N8_SWVERSIONTEXT:
         ret = "N8_SWVERSIONTEXT";
         break;
      case N8_FILEDESCRIPTOR:
         ret = "N8_FILEDESCRIPTOR";
         break;
      case N8_INITIALIZE_INFO:
         ret = "N8_INITIALIZE_INFO";
         break;
      case N8_HARDWAREREVISION:
         ret = "N8_HARDWAREREVISION";
         break;
      default:
         ret = "Invalid enumeration value for N8_Parameter_t";
   }

   return ret;
}   /* N8_Parameter_t_text */

/*****************************************************************************/
const char * N8_Boolean_t_text(const N8_Boolean_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_FALSE:
         ret = "N8_FALSE";
         break;
      case N8_TRUE:
         ret = "N8_TRUE";
         break;
      default:
         ret = "Invalid enumeration value for N8_Boolean_t";
   }

   return ret;
}   /* N8_Boolean_t_text */

/*****************************************************************************/
const char * N8_Protocol_t_text(const N8_Protocol_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_PROTOCOL_SSL:
         ret = "N8_PROTOCOL_SSL";
         break;
      case N8_PROTOCOL_TLS:
         ret = "N8_PROTOCOL_TLS";
         break;
      case N8_PROTOCOL_IPSEC:
         ret = "N8_PROTOCOL_IPSEC";
         break;
      default:
         ret = "Invalid enumeration value for N8_Protocol_t";
   }

   return ret;
}   /* N8_Protocol_t_text */

/*****************************************************************************/
const char * N8_PacketMemoryMode_t_text(const N8_PacketMemoryMode_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_PACKETMEMORY_NONE:
         ret = "N8_PACKETMEMORY_NONE";
         break;
      case N8_PACKETMEMORY_REQUEST:
         ret = "N8_PACKETMEMORY_REQUEST";
         break;
      default:
         ret = "Invalid enumeration value for N8_PacketMemoryMode_t";
   }

   return ret;
}   /* N8_PacketMemoryMode_t_text */

/*****************************************************************************/
const char * N8_HashAlgorithm_t_text(const N8_HashAlgorithm_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_MD5:
         ret = "N8_MD5";
         break;
      case N8_SHA1:
         ret = "N8_SHA1";
         break;
      case N8_HMAC_MD5:
         ret = "N8_HMAC_MD5";
         break;
      case N8_HMAC_SHA1:
         ret = "N8_HMAC_SHA1";
         break;
      case N8_HMAC_MD5_96:
         ret = "N8_HMAC_MD5_96";
         break;
      case N8_HMAC_SHA1_96:
         ret = "N8_HMAC_SHA1_96";
         break;
      case N8_HASH_NONE:
         ret = "N8_HASH_NONE";
         break;
      default:
         ret = "Invalid enumeration value for N8_HashAlgorithm_t";
   }

   return ret;
}   /* N8_HashAlgorithm_t_text */

/*****************************************************************************/
const char * N8_MemoryType_t_text(const N8_MemoryType_t enumValue)
{
   const char *ret;
   switch (enumValue)
   {
      case N8_MEMBANK_QUEUE:
         ret = "N8_MEMBANK_QUEUE";
         break;
      case N8_MEMBANK_EA:
         ret = "N8_MEMBANK_EA";
         break;
      case N8_MEMBANK_PK:
         ret = "N8_MEMBANK_PK";
         break;
      case N8_MEMBANK_USERPOOL:
         ret = "N8_MEMBANK_USERPOOL";
         break;
      case N8_MEMBANK_MAX:
         ret = "N8_MEMBANK_MAX";
         break;
      default:
         ret = "Invalid enumeration value for N8_MemoryType_t";
   }

   return ret;
}   /* N8_MemoryType_t_text */

