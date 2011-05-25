/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.48 $ of : mfd-top.m2c,v $
 *
 * $Id$
 */
#ifndef UDPENDPOINTTABLE_H
#define UDPENDPOINTTABLE_H

#ifdef __cplusplus
extern          "C" {
#endif


/** @defgroup misc misc: Miscelaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

    /*
     * other required module components 
     */
    /* *INDENT-OFF*  */
config_require(UDP-MIB/udpEndpointTable/udpEndpointTable_interface)
config_require(UDP-MIB/udpEndpointTable/udpEndpointTable_data_access)
    /* *INDENT-ON*  */

    /*
     * OID, column number and enum definions for udpEndpointTable 
     */
#include "udpEndpointTable_constants.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_udpEndpointTable(void);
    void            shutdown_udpEndpointTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table udpEndpointTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * UDP-MIB::udpEndpointTable is subid 7 of udp.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.7.7, length: 8
     */
    /*
     *********************************************************************
     * When you register your mib, you get to provide a generic
     * pointer that will be passed back to you for most of the
     * functions calls.
     *
     * TODO:100:r: Review all context structures
     */
    /*
     * TODO:101:o: |-> Review udpEndpointTable registration context.
     */
    typedef netsnmp_data_list udpEndpointTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review udpEndpointTable data context structure.
     * This structure is used to represent the data for udpEndpointTable.
     */
    /*
     * This structure contains storage for all the columns defined in the
     * udpEndpointTable.
     */
    typedef struct udpEndpointTable_data_s {

        /*
         * udpEndpointProcess(8)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          udpEndpointProcess;

    } udpEndpointTable_data;


    /*
     * TODO:120:r: |-> Review udpEndpointTable mib index.
     * This structure is used to represent the index for udpEndpointTable.
     */
    typedef struct udpEndpointTable_mib_index_s {

        /*
         * udpEndpointLocalAddressType(1)/InetAddressType/ASN_INTEGER/long(u_long)//l/a/w/E/r/d/h
         */
        u_long          udpEndpointLocalAddressType;

        /*
         * udpEndpointLocalAddress(2)/InetAddress/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h
         */
        /** 128 - 6(other indexes) - oid length(10) = 111 */
        char            udpEndpointLocalAddress[111];
        size_t          udpEndpointLocalAddress_len;

        /*
         * udpEndpointLocalPort(3)/InetPortNumber/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/R/d/H
         */
        u_long          udpEndpointLocalPort;

        /*
         * udpEndpointRemoteAddressType(4)/InetAddressType/ASN_INTEGER/long(u_long)//l/a/w/E/r/d/h
         */
        u_long          udpEndpointRemoteAddressType;

        /*
         * udpEndpointRemoteAddress(5)/InetAddress/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h
         */
        /** 128 - 6(other indexes) - oid length(10) = 111 */
        char            udpEndpointRemoteAddress[111];
        size_t          udpEndpointRemoteAddress_len;

        /*
         * udpEndpointRemotePort(6)/InetPortNumber/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/R/d/H
         */
        u_long          udpEndpointRemotePort;

        /*
         * udpEndpointInstance(7)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/R/d/h
         */
        u_long          udpEndpointInstance;


    } udpEndpointTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review udpEndpointTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(8)
     */
#define MAX_udpEndpointTable_IDX_LEN     118


    /*
     *********************************************************************
     * TODO:130:o: |-> Review udpEndpointTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * udpEndpointTable_rowreq_ctx pointer.
     */
    typedef struct udpEndpointTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_udpEndpointTable_IDX_LEN];

        udpEndpointTable_mib_index tbl_idx;

        udpEndpointTable_data data;

        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to udpEndpointTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *udpEndpointTable_data_list;

    } udpEndpointTable_rowreq_ctx;

    typedef struct udpEndpointTable_ref_rowreq_ctx_s {
        udpEndpointTable_rowreq_ctx *rowreq_ctx;
    } udpEndpointTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int            
        udpEndpointTable_pre_request(udpEndpointTable_registration *
                                     user_context);
    int            
        udpEndpointTable_post_request(udpEndpointTable_registration *
                                      user_context, int rc);


    udpEndpointTable_rowreq_ctx
        *udpEndpointTable_row_find_by_mib_index(udpEndpointTable_mib_index
                                                * mib_idx);

    extern oid      udpEndpointTable_oid[];
    extern int      udpEndpointTable_oid_size;


#include "udpEndpointTable_interface.h"
#include "udpEndpointTable_data_access.h"
    /*
     *********************************************************************
     * GET function declarations
     */

    /*
     *********************************************************************
     * GET Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table udpEndpointTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * UDP-MIB::udpEndpointTable is subid 7 of udp.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.7.7, length: 8
     */
    /*
     * indexes
     */

    int             udpEndpointProcess_get(udpEndpointTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long *
                                           udpEndpointProcess_val_ptr);


    int            
        udpEndpointTable_indexes_set_tbl_idx(udpEndpointTable_mib_index *
                                             tbl_idx,
                                             u_long
                                             udpEndpointLocalAddressType_val,
                                             char
                                             *udpEndpointLocalAddress_val_ptr,
                                             size_t
                                             udpEndpointLocalAddress_val_ptr_len,
                                             u_long
                                             udpEndpointLocalPort_val,
                                             u_long
                                             udpEndpointRemoteAddressType_val,
                                             char
                                             *udpEndpointRemoteAddress_val_ptr,
                                             size_t
                                             udpEndpointRemoteAddress_val_ptr_len,
                                             u_long
                                             udpEndpointRemotePort_val,
                                             u_long
                                             udpEndpointInstance_val);
    int            
        udpEndpointTable_indexes_set(udpEndpointTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long
                                     udpEndpointLocalAddressType_val,
                                     char *udpEndpointLocalAddress_val_ptr,
                                     size_t
                                     udpEndpointLocalAddress_val_ptr_len,
                                     u_long udpEndpointLocalPort_val,
                                     u_long
                                     udpEndpointRemoteAddressType_val,
                                     char
                                     *udpEndpointRemoteAddress_val_ptr,
                                     size_t
                                     udpEndpointRemoteAddress_val_ptr_len,
                                     u_long udpEndpointRemotePort_val,
                                     u_long udpEndpointInstance_val);



    /*
     *********************************************************************
     * SET function declarations
     */

    /*
     *********************************************************************
     * SET Table declarations
     */


    /*
     * DUMMY markers, ignore
     *
     * TODO:099:x: *************************************************************
     * TODO:199:x: *************************************************************
     * TODO:299:x: *************************************************************
     * TODO:399:x: *************************************************************
     * TODO:499:x: *************************************************************
     */

#ifdef __cplusplus
}
#endif
#endif                          /* UDPENDPOINTTABLE_H */