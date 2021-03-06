//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@class CLAccount, CLWebItem, NSArray, NSError, NSString;

@protocol CLAPIEngineDelegate <NSObject>

@optional
- (void)storeReceiptRedemptionSucceeded:(CLAccount *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)storeProductInformationRetrievalSucceeded:(NSArray *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)accountCreationSucceeded:(CLAccount *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)itemListRetrievalSucceeded:(NSArray *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)accountInformationRetrievalSucceeded:(CLAccount *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)itemInformationRetrievalSucceeded:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)itemRestorationDidSucceed:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)itemDeletionDidSucceed:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)itemUpdateDidSucceed:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)accountUpdateDidSucceed:(CLAccount *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)linkBookmarkDidSucceedWithResultingItem:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)fileUploadDidSucceedWithResultingItem:(CLWebItem *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)fileUploadDidProgress:(double)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)requestDidFailWithError:(NSError *)arg1 connectionIdentifier:(NSString *)arg2 userInfo:(id)arg3;
- (void)requestDidSucceedWithConnectionIdentifier:(NSString *)arg1 userInfo:(id)arg2;
@end

