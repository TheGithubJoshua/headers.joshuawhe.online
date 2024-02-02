//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/WBSCompletionListItem-Protocol.h>

@class CompletionList, CompletionListGroup, NSString, UITableViewCell, UIView;
@protocol CompletionItem, CompletionItemActionHandler;

@protocol CompletionItem <WBSCompletionListItem>
- (NSString *)reflectedStringForUserTypedString:(NSString *)arg1;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (void)acceptCompletionWithActionHandler:(id <CompletionItemActionHandler>)arg1;
- (void)configureCompletionTableViewCell:(UITableViewCell *)arg1 forCompletionList:(CompletionList *)arg2;
- (UITableViewCell *)completionTableViewCellForCompletionList:(CompletionList *)arg1;
- (NSString *)completionTableViewCellReuseIdentifier;

@optional
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
@property(readonly, nonatomic) _Bool restoresSearchState;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, nonatomic) _Bool needsSectionHeader;
@property(readonly, nonatomic) _Bool usesDefaultHeaderView;
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
- (NSString *)userVisibleURLString;
- (NSString *)originalURLString;
- (_Bool)shouldPrefetchWithMatchLength:(unsigned long long)arg1;
- (_Bool)isEquivalentTo:(id <CompletionItem>)arg1;
- (void)configureCompletionTableHeaderView:(UIView *)arg1 forCompletionListGroup:(CompletionListGroup *)arg2;
- (UIView *)completionTableHeaderView;
- (double)completionTableViewCellCustomHeightForCompletionList:(CompletionList *)arg1;
@end
