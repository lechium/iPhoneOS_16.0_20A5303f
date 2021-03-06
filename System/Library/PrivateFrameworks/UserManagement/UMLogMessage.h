//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface UMLogMessage : NSObject
{
    NSMutableArray *_publicStrings;	// 8 = 0x8
    NSMutableArray *_privateStrings;	// 16 = 0x10
}

+ (id)messageWithTask:(id)arg1 privateFormat:(id)arg2;	// IMP=0x00600000000095d0
+ (id)messageWithTask:(id)arg1 publicFormat:(id)arg2;	// IMP=0x0060000000009450
+ (id)messageWithTask:(id)arg1;	// IMP=0x00600000000093fb
+ (void)_addTaskInfoFrom:(id)arg1 toMessage:(id)arg2;	// IMP=0x0060000000009354
+ (id)messageWithUser:(id)arg1 privateFormat:(id)arg2;	// IMP=0x00600000000091d4
+ (id)messageWithUser:(id)arg1 publicFormat:(id)arg2;	// IMP=0x0060000000009054
+ (id)messageWithUser:(id)arg1;	// IMP=0x0060000000008fff
+ (void)_addUserInfoFrom:(id)arg1 toMessage:(id)arg2;	// IMP=0x0060000000008f4c
+ (id)messageWithPrivateFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x0060000000008eb6
+ (id)messageWithPublicFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x0060000000008e20
+ (id)messageWithPrivateFormat:(id)arg1;	// IMP=0x0060000000008cdd
+ (id)messageWithPublicFormat:(id)arg1;	// IMP=0x0060000000008b9a
- (void).cxx_destruct;	// IMP=0x0000000000009cea
@property(retain, nonatomic) NSMutableArray *privateStrings; // @synthesize privateStrings=_privateStrings;
@property(retain, nonatomic) NSMutableArray *publicStrings; // @synthesize publicStrings=_publicStrings;
@property(readonly, nonatomic) NSString *privateString;
@property(readonly, nonatomic) NSString *publicString;
- (id)_stringForArray:(id)arg1;	// IMP=0x0000000000009a31
- (void)addPrivateFormat:(id)arg1;	// IMP=0x00000000000098fb
- (void)addPublicFormat:(id)arg1;	// IMP=0x00000000000097c5
- (id)init;	// IMP=0x0000000000009750

@end

