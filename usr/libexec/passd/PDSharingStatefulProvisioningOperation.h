//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDSharingStatefulProvisioningOperation : NSObject
{
    _Bool _isForegroundOperation;	// 8 = 0x8
    _Bool _isWaitingOnUserAction;	// 9 = 0x9
    _Bool _requiresSenderActivationVerification;	// 10 = 0xa
    NSString *_shareIdentifier;	// 16 = 0x10
    NSString *_transportIdentifier;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000086b5
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool requiresSenderActivationVerification; // @synthesize requiresSenderActivationVerification=_requiresSenderActivationVerification;
@property(nonatomic) _Bool isWaitingOnUserAction; // @synthesize isWaitingOnUserAction=_isWaitingOnUserAction;
@property(nonatomic) _Bool isForegroundOperation; // @synthesize isForegroundOperation=_isForegroundOperation;
@property(retain, nonatomic) NSString *transportIdentifier; // @synthesize transportIdentifier=_transportIdentifier;
@property(retain, nonatomic) NSString *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;
- (id)copyWithoutCompletion;	// IMP=0x00100000000085aa
- (id)description;	// IMP=0x0010000000008441

@end
