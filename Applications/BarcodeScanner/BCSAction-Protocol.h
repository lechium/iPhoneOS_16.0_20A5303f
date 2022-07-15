//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol BCSActionDelegate;

@protocol BCSAction <NSObject>
@property(readonly, copy, nonatomic) NSArray *actionPickerItems;
@property(readonly, copy, nonatomic) NSString *localizedActionDescription;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionDescription;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionTitle;
@property(readonly, copy, nonatomic) NSString *defaultActionTargetApplicationBundleIdentifier;
@property(readonly, nonatomic) NSURL *urlThatCanBeOpened;
@property(nonatomic) __weak id <BCSActionDelegate> delegate;
- (void)showActionPicker;
- (void)performAction;
- (void)performDefaultAction;

@optional
- (void)performDefaultActionWithCompletionHandler:(void (^)(NSError *))arg1;
@end
