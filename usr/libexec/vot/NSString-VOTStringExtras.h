//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (VOTStringExtras)
+ (id)stringWithUnichar:(unsigned short)arg1;	// IMP=0x001000000002ae3b
- (id)wordStringFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x002000000002b01e
- (struct _NSRange)wordFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x001000000002afb5
- (struct _NSRange)lineFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x001000000002af4c
- (struct _NSRange)paragraphFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x001000000002aee3
- (struct _NSRange)sentenceFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x001000000002ae7a
@end
