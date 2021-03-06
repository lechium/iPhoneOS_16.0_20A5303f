//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString;

@protocol SRPClientRequest <NSObject>
@property(readonly, copy, nonatomic) NSString *recordID;
@property(readonly, retain, nonatomic) NSDictionary *escrowRecord;
@property(readonly, copy, nonatomic) NSString *recoveryPassphrase;
@property(readonly, copy, nonatomic) NSString *recordLabel;
@property(readonly, copy, nonatomic) NSString *dsid;
- (NSError *)validateInput;
@end

