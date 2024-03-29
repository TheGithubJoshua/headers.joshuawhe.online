<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSPRegistry.h</title>
    <meta name="viewport" content="width=device-width">
    <style>
    body { margin: 1em; }
    pre { font: 11pt/1.25 ui-monospace, "SF Mono", Menlo, monospace; }
    a { color: #af52de; }
    pre { white-space: pre-wrap; }
    header, footer { color: #8e8e93; }
    header { white-space: pre; }
    footer { max-width: 700px; }
    hr { border: 0; border-top: 1px solid #c6c6c8; }
    .download { text-decoration: none; }
    @media (prefers-color-scheme: dark) {
        body { background: black; color: white; }
        a { color: #bf5af2; }
        hr { border-top-color: #333335; }
    }
    </style>
</head>
<body>
<pre><header>
 ___          _   _             ___
| _ \_  _ _ _| |_(_)_ __  ___  | _ )_ _ _____ __ _____ ___ _ _
|   / || | ' \  _| | '  \/ -_) | _ \ '_/ _ \ V  V (_-// -_) '_|
|_|_\\_,_|_||_\__|_|_|_|_\___| |___/_| \___/\_/\_//__/\___|_|


</header><hr>

/PrivateFrameworks/iWorkImport.framework/TSPRegistry.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSPRegistry : NSObject {
    struct unordered_map<const char *, unsigned int, TSP::CStringHash, TSP::CStringEqualTo, std::__1::allocator<std::__1::pair<const char *const, unsigned int> > > { 
        struct __hash_table<std::__1::__hash_value_type<const char *, unsigned int>, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, unsigned int>, TSP::CStringHash, true>, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, unsigned int>, TSP::CStringEqualTo, true>, std::__1::allocator<std::__1::__hash_value_type<const char *, unsigned int> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, unsigned int>, TSP::CStringHash, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, unsigned int>, TSP::CStringEqualTo, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _classnameToMessageTypeMap;
    struct unordered_map<const google::protobuf::Descriptor *, unsigned int, TSP::DescriptorHash, std::__1::equal_to<const google::protobuf::Descriptor *>, std::__1::allocator<std::__1::pair<const google::protobuf::Descriptor *const, unsigned int> > > { 
        struct __hash_table<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::__1::__unordered_map_hasher<const google::protobuf::Descriptor *, std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, TSP::DescriptorHash, true>, std::__1::__unordered_map_equal<const google::protobuf::Descriptor *, std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::__1::equal_to<const google::protobuf::Descriptor *>, true>, std::__1::allocator<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const google::protobuf::Descriptor *, std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, TSP::DescriptorHash, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const google::protobuf::Descriptor *, std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::__1::equal_to<const google::protobuf::Descriptor *>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _descriptorToMessageTypeMap;
    struct unordered_map<unsigned int, __unsafe_unretained Class, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, __unsafe_unretained Class> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__1::hash<unsigned int>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__1::equal_to<unsigned int>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _messageTypeToClassMap;
    struct unordered_map<unsigned int, const char *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const char *> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned int, const char *>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, const char *>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, const char *>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, const char *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, const char *>, std::__1::hash<unsigned int>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, const char *>, std::__1::equal_to<unsigned int>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _messageTypeToClassnameMap;
    struct unordered_map<unsigned int, const google::protobuf::Message *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const google::protobuf::Message *> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__1::hash<unsigned int>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__1::equal_to<unsigned int>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _messageTypeToPrototypeMap;
}

+ (void)setInitializationHandler:(id /* block */)arg1;
+ (id)sharedRegistry;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (const struct Message { int (**x1)(); }*)messagePrototypeForMessageType:(unsigned int)arg1;
- (unsigned int)messageTypeForDescriptor:(const struct Descriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct FileDescriptor {} *x3; struct Descriptor {} *x4; struct MessageOptions {} *x5; struct FieldDescriptor {} *x6; struct OneofDescriptor {} *x7; struct Descriptor {} *x8; struct EnumDescriptor {} *x9; struct ExtensionRange {} *x10; struct FieldDescriptor {} *x11; struct ReservedRange {} *x12; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} **x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; bool x22; bool x23; }*)arg1;
- (unsigned int)messageTypeForUnarchiveClassname:(const char *)arg1;
- (void)registerPersistenceMessages;
- (void)resetForMessageType:(unsigned int)arg1 descriptor:(const struct Descriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct FileDescriptor {} *x3; struct Descriptor {} *x4; struct MessageOptions {} *x5; struct FieldDescriptor {} *x6; struct OneofDescriptor {} *x7; struct Descriptor {} *x8; struct EnumDescriptor {} *x9; struct ExtensionRange {} *x10; struct FieldDescriptor {} *x11; struct ReservedRange {} *x12; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} **x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; bool x22; bool x23; }*)arg2;
- (void)setDeprecatedMessageType:(unsigned int)arg1;
- (void)setMessageType:(unsigned int)arg1 forUnarchiveClassname:(const char *)arg2;
- (void)setMessageType:(unsigned int)arg1 messagePrototype:(const struct Message { int (**x1)(); }*)arg2 descriptor:(const struct Descriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct FileDescriptor {} *x3; struct Descriptor {} *x4; struct MessageOptions {} *x5; struct FieldDescriptor {} *x6; struct OneofDescriptor {} *x7; struct Descriptor {} *x8; struct EnumDescriptor {} *x9; struct ExtensionRange {} *x10; struct FieldDescriptor {} *x11; struct ReservedRange {} *x12; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} **x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; bool x22; bool x23; }*)arg3 unarchiveClassname:(const char *)arg4;
- (void)setOverrideMessageType:(unsigned int)arg1 messagePrototype:(const struct Message { int (**x1)(); }*)arg2 descriptor:(const struct Descriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct FileDescriptor {} *x3; struct Descriptor {} *x4; struct MessageOptions {} *x5; struct FieldDescriptor {} *x6; struct OneofDescriptor {} *x7; struct Descriptor {} *x8; struct EnumDescriptor {} *x9; struct ExtensionRange {} *x10; struct FieldDescriptor {} *x11; struct ReservedRange {} *x12; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} **x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; bool x22; bool x23; }*)arg3;
- (void)setOverrideMessageType:(unsigned int)arg1 messagePrototype:(const struct Message { int (**x1)(); }*)arg2 descriptor:(const struct Descriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct FileDescriptor {} *x3; struct Descriptor {} *x4; struct MessageOptions {} *x5; struct FieldDescriptor {} *x6; struct OneofDescriptor {} *x7; struct Descriptor {} *x8; struct EnumDescriptor {} *x9; struct ExtensionRange {} *x10; struct FieldDescriptor {} *x11; struct ReservedRange {} *x12; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} **x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; bool x22; bool x23; }*)arg3 unarchiveClassname:(const char *)arg4;
- (void)setUpgradeMessageType:(unsigned int)arg1 messagePrototype:(const struct Message { int (**x1)(); }*)arg2 unarchiveClass:(Class)arg3 unarchiveClassname:(const char *)arg4;
- (void)setUpgradeMessageType:(unsigned int)arg1 messagePrototype:(const struct Message { int (**x1)(); }*)arg2 unarchiveClassname:(const char *)arg3;
- (Class)unarchiveClassForMessageType:(unsigned int)arg1;

@end


<hr><footer>
Source code: <a href="https://github.com/hbang/RuntimeBrowser">https://github.com/hbang/RuntimeBrowser</a>

Authors:
  Ezra Epstein (eepstein@prajna.com)
  Nicolas Seriot (nicolas@seriot.ch)
  HASHBANG Productions

Copyright &copy; 2002 by Prajna IT Consulting
Copyright &copy; 2015 by <a href="http://www.seriot.ch">Nicolas Seriot</a>
Copyright &copy; 2021 by <a href="https://hashbang.productions">HASHBANG Productions</a>

THIS PROGRAM AND THIS CODE COME WITH ABSOLUTELY NO WARRANTY. THIS CODE HAS BEEN PROVIDED "AS IS" AND THE RESPONSIBILITY FOR ITS OPERATIONS IS 100% YOURS.

RuntimeBrowser is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

RuntimeBrowser is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with RuntimeBrowser (in a file called "COPYING.txt"); if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA</footer></pre>
</body>
</html>
