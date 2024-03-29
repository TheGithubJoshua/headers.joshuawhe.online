<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOTileCacheReserved.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOTileCacheReserved.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOTileCacheReserved : NSObject {
    unsigned long long  _reservedCurrentCost;
    unsigned long long  _reservedCurrentCount;
    struct list<CacheItem, std::__1::allocator<CacheItem> > { 
        struct __list_node_base<CacheItem, void *> { 
            struct __list_node_base<CacheItem, void *> {} *__prev_; 
            struct __list_node_base<CacheItem, void *> {} *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<CacheItem, void *> > > { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _reservedList;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _reservedLock;
    struct unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *> > > > { 
        struct __hash_table<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, hashkey, true>, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, eqkey, true>, std::__1::allocator<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, hashkey, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, eqkey, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _reservedMap;
    unsigned long long  _reservedMaxCapacity;
    unsigned long long  _reservedMaxCost;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

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
