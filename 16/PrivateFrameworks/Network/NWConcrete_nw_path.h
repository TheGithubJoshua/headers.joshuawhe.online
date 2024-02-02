//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_advertise_descriptor, OS_nw_array, OS_nw_browse_descriptor, OS_nw_endpoint, OS_nw_group_descriptor, OS_nw_interface, OS_nw_parameters, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_path : NSObject
{
    struct os_unfair_lock_s lock;	// 8 = 0x8
    NSObject<OS_nw_parameters> *parameters;	// 16 = 0x10
    NSObject<OS_nw_endpoint> *endpoint;	// 24 = 0x18
    NSObject<OS_nw_group_descriptor> *group_descriptor;	// 32 = 0x20
    NSObject<OS_nw_browse_descriptor> *browse_descriptor;	// 40 = 0x28
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;	// 48 = 0x30
    NSObject<OS_nw_array> *discovered_endpoints;	// 56 = 0x38
    NSObject<OS_nw_array> *resolved_endpoints;	// 64 = 0x40
    NSObject<OS_nw_array> *flows;	// 72 = 0x48
    NSObject<OS_nw_endpoint> *override_local_endpoint;	// 80 = 0x50
    NSObject<OS_nw_interface> *override_interface;	// 88 = 0x58
    NSObject<OS_nw_interface> *direct;	// 96 = 0x60
    NSObject<OS_nw_interface> *delegate;	// 104 = 0x68
    NSObject<OS_nw_interface> *fallback_interface;	// 112 = 0x70
    unsigned char client_id[16];	// 120 = 0x78
    unsigned char flow_registration_id[16];	// 136 = 0x88
    unsigned char fallback_agent[16];	// 152 = 0x98
    NSObject<OS_xpc_object> *fallback_agent_domains;	// 168 = 0xa8
    NSObject<OS_xpc_object> *fallback_agent_types;	// 176 = 0xb0
    NSObject<OS_nw_array> *resolver_configs;	// 184 = 0xb8
    NSObject<OS_nw_array> *gateways;	// 192 = 0xc0
    NSObject<OS_nw_array> *group_members;	// 200 = 0xc8
    NSObject<OS_xpc_object> *network_agent_dictionary;	// 208 = 0xd0
    NSObject<OS_nw_array> *proxy_configs;	// 216 = 0xd8
    NSObject<OS_xpc_object> *proxy_settings;	// 224 = 0xe0
    char *reason_description;	// 232 = 0xe8
    struct nw_path_necp_result policy_result;	// 240 = 0xf0
    unsigned int effective_mtu;	// 336 = 0x150
    unsigned int effective_traffic_class;	// 340 = 0x154
    unsigned int interface_time_delta;	// 344 = 0x158
    unsigned int fallback_generation;	// 348 = 0x15c
    int status;	// 352 = 0x160
    int reason;	// 356 = 0x164
    unsigned short custom_ethertype;	// 360 = 0x168
    unsigned char custom_ip_protocol;	// 362 = 0x16a
    struct necp_client_result_estimated_throughput estimates;	// 363 = 0x16b
    struct ipv6_prefix nat64_prefixes[4];	// 368 = 0x170
    unsigned char recommended_mss;	// 448 = 0x1c0
    unsigned int weak_fallback:1;	// 449 = 0x1c1
    unsigned int no_fallback_timer:1;	// 449 = 0x1c1
    unsigned int fallback_is_forced:1;	// 449 = 0x1c1
    unsigned int fallback_is_preferred:1;	// 449 = 0x1c1
    unsigned int is_local:1;	// 449 = 0x1c1
    unsigned int is_direct:1;	// 449 = 0x1c1
    unsigned int has_ipv4:1;	// 449 = 0x1c1
    unsigned int has_ipv6:1;	// 449 = 0x1c1
    unsigned int has_nat64:1;	// 450 = 0x1c2
    unsigned int traffic_mgmt_background:1;	// 450 = 0x1c2
    unsigned int necp_satisfied:1;	// 450 = 0x1c2
    unsigned int override_viable:1;	// 450 = 0x1c2
    unsigned int changed_from_previous:1;	// 450 = 0x1c2
    unsigned int probe_connectivity:1;	// 450 = 0x1c2
    unsigned int link_quality_abort:1;	// 450 = 0x1c2
    unsigned int checked_dns:1;	// 450 = 0x1c2
    unsigned int is_listener:1;	// 451 = 0x1c3
    unsigned int is_interpose:1;	// 451 = 0x1c3
    unsigned int specific_listener:1;	// 451 = 0x1c3
    unsigned int override_is_expensive:1;	// 451 = 0x1c3
    unsigned int override_is_constrained:1;	// 451 = 0x1c3
    unsigned int override_uses_wifi:1;	// 451 = 0x1c3
    unsigned int override_uses_cellular:1;	// 451 = 0x1c3
    unsigned int override_interface_scoped:1;	// 451 = 0x1c3
    unsigned int merged_proxy_configs:1;	// 452 = 0x1c4
    unsigned int has_kext_filter:1;	// 452 = 0x1c4
    unsigned int has_pf_rules:1;	// 452 = 0x1c4
    unsigned int has_application_level_firewall:1;	// 452 = 0x1c4
    unsigned int has_parental_controls:1;	// 452 = 0x1c4
    unsigned int __pad_bits:3;	// 452 = 0x1c4
}

- (void).cxx_destruct;	// IMP=0x0000000000706d60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000706ca0
- (id)redactedDescription;	// IMP=0x0000000000706c80
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000706bb0
- (id)init;	// IMP=0x00000000007068b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
