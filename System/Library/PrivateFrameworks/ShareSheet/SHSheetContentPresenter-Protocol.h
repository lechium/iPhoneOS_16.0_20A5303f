//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class NSString;
@protocol SHSheetActivityProxy, SHSheetPeopleSuggestionProxy;

@protocol SHSheetContentPresenter <NSObject>
- (NSString *)customTitleForActivityType:(NSString *)arg1;
- (void)didSelectSendCopyAction;
- (void)didSelectCollaborativeAction;
- (void)handleInfoSuggestionPress:(NSString *)arg1;
- (void)handleNext;
- (void)handleActionsEdit;
- (void)handleClose;
- (void)handleCustomHeaderButton;
- (void)handleCollaborationOptions;
- (void)handleOptions;
- (void)performActionActivityProxy:(id <SHSheetActivityProxy>)arg1;
- (void)performShareActivityProxy:(id <SHSheetActivityProxy>)arg1;
- (void)removePeopleSuggestionProxy:(id <SHSheetPeopleSuggestionProxy>)arg1;
- (void)performPeopleSuggestionProxy:(id <SHSheetPeopleSuggestionProxy>)arg1;
@end
