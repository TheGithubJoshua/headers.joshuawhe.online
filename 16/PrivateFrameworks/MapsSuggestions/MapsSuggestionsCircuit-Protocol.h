//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsJSONable-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@protocol MapsSuggestionsCondition, MapsSuggestionsTrigger;

@protocol MapsSuggestionsCircuit <MapsSuggestionsObject, MapsSuggestionsJSONable>
- (void)removeCondition:(id <MapsSuggestionsCondition>)arg1;
- (void)removeTrigger:(id <MapsSuggestionsTrigger>)arg1;
- (void)addCondition:(id <MapsSuggestionsCondition>)arg1;
- (void)addTrigger:(id <MapsSuggestionsTrigger>)arg1;
@end
