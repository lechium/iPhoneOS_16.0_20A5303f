//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDString, NSString;

__attribute__((visibility("hidden")))
@interface EDContentFormat : NSObject
{
    EDString *mFormatString;	// 8 = 0x8
    unsigned long long mFormatId;	// 16 = 0x10
    _Bool mBuiltIn;	// 24 = 0x18
    _Bool mReferenced;	// 25 = 0x19
}

+ (id)contentFormatWithFormatString:(id)arg1;	// IMP=0x00100000001146ef
+ (id)contentFormatWithFormatString:(id)arg1 formatId:(unsigned long long)arg2;	// IMP=0x00100000001146bf
+ (id)contentFormatWithNSString:(id)arg1 formatId:(unsigned long long)arg2 builtIn:(_Bool)arg3;	// IMP=0x00100000001144ba
- (void).cxx_destruct;	// IMP=0x00000000003a61d1
@property(readonly, copy) NSString *description;
- (_Bool)referenced;	// IMP=0x00000000003a618a
- (_Bool)builtIn;	// IMP=0x00000000003a6181
- (unsigned long long)formatId;	// IMP=0x000000000011486a
- (id)formatString;	// IMP=0x0000000000134fd0
- (long long)key;	// IMP=0x0000000000114a36
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000118a93
- (_Bool)isEqualToContentFormat:(id)arg1;	// IMP=0x0000000000118b0f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a60da
- (id)init;	// IMP=0x0000000000114746
- (void)setReferenced:(_Bool)arg1;	// IMP=0x0000000000114a40
- (void)setFormatId:(unsigned long long)arg1;	// IMP=0x0000000000210fa1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
