<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDCumulativeCollectionCalculator_DEPRECATED.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDCumulativeCollectionCalculator_DEPRECATED.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDCumulativeCollectionCalculator_DEPRECATED : HDCollectionCalculator_DEPRECATED {
    struct HDCumulativeStatistics_DEPRECATEDEngine_DEPRECATED { 
        long long _currentBucketIndex; 
        struct HDCumulativeStatistics_DEPRECATEDBucket_DEPRECATED { 
            double _startTime; 
            double _endTime; 
            double _intervalDuration; 
            struct vector<long long, std::__1::allocator<long long> > { 
                long long *__begin_; 
                long long *__end_; 
                struct __compressed_pair<long long *, std::__1::allocator<long long> > { 
                    long long *__value_; 
                } __end_cap_; 
            } _orderedSourceIDs; 
            struct unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > > { 
                struct __hash_table<std::__1::__hash_value_type<long long, NSString *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, NSString *> > > { 
                    struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > { 
                        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > { 
                            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> {} **__value_; 
                            struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > { 
                                struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > { 
                                    unsigned long long __value_; 
                                } __data_; 
                            } __value_; 
                        } __ptr_; 
                    } __bucket_list_; 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> { 
                            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> {} *__next_; 
                        } __value_; 
                    } __p1_; 
                    struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true> > { 
                        unsigned long long __value_; 
                    } __p2_; 
                    struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true> > { 
                        float __value_; 
                    } __p3_; 
                } __table_; 
            } _sourceIDToBundleIdentifier; 
            struct HDCumulativeStatistics_DEPRECATEDInterval_DEPRECATED { 
                double _startTime; 
                double _endTime; 
                long long _sampleCount; 
                struct map<long long, HDCumulativeStatistics_DEPRECATED, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, HDCumulativeStatistics_DEPRECATED> > > { 
                    struct __tree<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, void *> > > { 
                            struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                                struct __tree_node_base<void *> {} *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::less<long long>, true> > { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } _statisticsBySourceID; 
            } _currentInterval; 
            long long _currentIntervalIndex; 
            struct vector<HDCumulativeSample_DEPRECATED, std::__1::allocator<HDCumulativeSample_DEPRECATED> > { 
                struct HDCumulativeSample_DEPRECATED {} *__begin_; 
                struct HDCumulativeSample_DEPRECATED {} *__end_; 
                struct __compressed_pair<HDCumulativeSample_DEPRECATED *, std::__1::allocator<HDCumulativeSample_DEPRECATED> > { 
                    struct HDCumulativeSample_DEPRECATED {} *__value_; 
                } __end_cap_; 
            } _remainders; 
            struct HDCumulativeStatistics_DEPRECATED { 
                double _sum; 
                long long _count; 
                double _startTime; 
                double _endTime; 
            } _statistics; 
            struct map<long long, HDCumulativeStatistics_DEPRECATED, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, HDCumulativeStatistics_DEPRECATED> > > { 
                struct __tree<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __value_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::less<long long>, true> > { 
                        unsigned long long __value_; 
                    } __pair3_; 
                } __tree_; 
            } _statisticsBySourceID; 
            struct map<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED> > > { 
                struct __tree<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED>, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __value_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                        unsigned long long __value_; 
                    } __pair3_; 
                } __tree_; 
            } _statisticsBySourceBundleIdentifier; 
        } _currentBucket; 
        struct vector<HDCumulativeSample_DEPRECATED, std::__1::allocator<HDCumulativeSample_DEPRECATED> > { 
            struct HDCumulativeSample_DEPRECATED {} *__begin_; 
            struct HDCumulativeSample_DEPRECATED {} *__end_; 
            struct __compressed_pair<HDCumulativeSample_DEPRECATED *, std::__1::allocator<HDCumulativeSample_DEPRECATED> > { 
                struct HDCumulativeSample_DEPRECATED {} *__value_; 
            } __end_cap_; 
        } _remainders; 
    }  _calculator;
    unsigned long long  _dataCount;
    struct HDCumulativeStatistics_DEPRECATEDBucket_DEPRECATED { 
        double _startTime; 
        double _endTime; 
        double _intervalDuration; 
        struct vector<long long, std::__1::allocator<long long> > { 
            long long *__begin_; 
            long long *__end_; 
            struct __compressed_pair<long long *, std::__1::allocator<long long> > { 
                long long *__value_; 
            } __end_cap_; 
        } _orderedSourceIDs; 
        struct unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > > { 
            struct __hash_table<std::__1::__hash_value_type<long long, NSString *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, NSString *> > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> {} **__value_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> {} *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true> > { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true> > { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _sourceIDToBundleIdentifier; 
        struct HDCumulativeStatistics_DEPRECATEDInterval_DEPRECATED { 
            double _startTime; 
            double _endTime; 
            long long _sampleCount; 
            struct map<long long, HDCumulativeStatistics_DEPRECATED, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, HDCumulativeStatistics_DEPRECATED> > > { 
                struct __tree<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __value_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::less<long long>, true> > { 
                        unsigned long long __value_; 
                    } __pair3_; 
                } __tree_; 
            } _statisticsBySourceID; 
        } _currentInterval; 
        long long _currentIntervalIndex; 
        struct vector<HDCumulativeSample_DEPRECATED, std::__1::allocator<HDCumulativeSample_DEPRECATED> > { 
            struct HDCumulativeSample_DEPRECATED {} *__begin_; 
            struct HDCumulativeSample_DEPRECATED {} *__end_; 
            struct __compressed_pair<HDCumulativeSample_DEPRECATED *, std::__1::allocator<HDCumulativeSample_DEPRECATED> > { 
                struct HDCumulativeSample_DEPRECATED {} *__value_; 
            } __end_cap_; 
        } _remainders; 
        struct HDCumulativeStatistics_DEPRECATED { 
            double _sum; 
            long long _count; 
            double _startTime; 
            double _endTime; 
        } _statistics; 
        struct map<long long, HDCumulativeStatistics_DEPRECATED, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, HDCumulativeStatistics_DEPRECATED> > > { 
            struct __tree<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics_DEPRECATED>, std::__1::less<long long>, true> > { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _statisticsBySourceID; 
        struct map<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED> > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics_DEPRECATED>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _statisticsBySourceBundleIdentifier; 
    }  _lastFinishedBucket;
    unsigned long long  _mergeStrategy;
    bool  _openEndedCalculator;
    struct vector<long long, std::__1::allocator<long long> > { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long long *, std::__1::allocator<long long> > { 
            long long *__value_; 
        } __end_cap_; 
    }  _orderedSourceIDs;
    struct unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > > { 
        struct __hash_table<std::__1::__hash_value_type<long long, NSString *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, NSString *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _sourceBundleIdentifierMapping;
}

@property (nonatomic) unsigned long long dataCount;
@property (nonatomic, readonly) double earliestAllowableStartTime;
@property (nonatomic) unsigned long long mergeStrategy;
@property (nonatomic, readonly) NSSet *sourceIDsForCurrentBucket;
@property (nonatomic, readonly) NSDictionary *sumsByBundleIdentifier;
@property (nonatomic, readonly) NSDictionary *sumsBySourceID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct HDCumulativeStatistics_DEPRECATEDBucket_DEPRECATED { double x1; double x2; double x3; struct vector<long long, std::__1::allocator<long long> > { long long *x_4_1_1; long long *x_4_1_2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_2_1; } x_4_1_3; } x4; struct unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > > { struct __hash_table<std::__1::__hash_value_type<long long, NSString *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, NSString *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; })_bucketForCurrentDates;
- (void)_didAddFirstValue;
- (double)addCurrentBucket;
- (void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4;
- (bool)advanceBucket;
- (bool)canAddValueWithStartTime:(double)arg1 endTime:(double)arg2;
- (unsigned long long)dataCount;
- (id)description;
- (double)earliestAllowableStartTime;
- (bool)hasData;
- (id)initWithOrderedSourceIDs:(id)arg1 bundleIdentifierMapping:(id)arg2 mergeStrategy:(unsigned long long)arg3;
- (id)initWithStatisticsCollection:(id)arg1 orderedSourceIDs:(id)arg2 bundleIdentifierMapping:(id)arg3 mergeStrategy:(unsigned long long)arg4;
- (unsigned long long)mergeStrategy;
- (void)setDataCount:(unsigned long long)arg1;
- (void)setMergeStrategy:(unsigned long long)arg1;
- (void)setStartTime:(double)arg1 endTime:(double)arg2;
- (id)sourceIDsForCurrentBucket;
- (id)sumsByBundleIdentifier;
- (id)sumsBySourceID;

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