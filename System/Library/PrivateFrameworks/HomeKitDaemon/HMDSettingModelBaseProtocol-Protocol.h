//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol HMDSettingModelBaseProtocol <NSObject>
@property(readonly, nonatomic) NSString *nameForKeyPath;
@property(readonly, nonatomic) NSUUID *hmbParentModelID;
@property(readonly, nonatomic) NSUUID *hmbModelID;
- (id)copyWithNewParentModelID:(NSUUID *)arg1;
@end

