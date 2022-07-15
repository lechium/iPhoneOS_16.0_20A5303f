//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol SDAirDropAlertManagerDelegate;

@protocol SDAirDropAlertManager <NSObject>
@property(nonatomic) __weak NSObject<SDAirDropAlertManagerDelegate> *delegate;
- (void)finishedEventForRecordID:(NSString *)arg1 withResults:(NSDictionary *)arg2;
- (void)errorEventForRecordID:(NSString *)arg1 withResults:(NSDictionary *)arg2;
- (void)cancelEventForRecordID:(NSString *)arg1 withResults:(NSDictionary *)arg2;
- (void)progressEventForRecordID:(NSString *)arg1 withResults:(NSDictionary *)arg2;
- (void)askEventForRecordID:(NSString *)arg1 withResults:(NSDictionary *)arg2;
@end
