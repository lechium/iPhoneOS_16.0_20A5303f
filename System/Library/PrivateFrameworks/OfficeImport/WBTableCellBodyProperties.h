//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTableCellBodyProperties : NSObject
{
}

+ (void)write:(id)arg1 wrdProperties:(void *)arg2 tracked:(void *)arg3 index:(unsigned long long)arg4;	// IMP=0x00800000003e82b0
+ (void)readFrom:(void *)arg1 tracked:(void *)arg2 properties:(id)arg3 index:(unsigned long long)arg4;	// IMP=0x00800000000e7420
+ (void)mapProperties:(id)arg1 toWordProperties:(void *)arg2 index:(unsigned long long)arg3;	// IMP=0x00800000003e8398
+ (void)mapWordProperties:(void *)arg1 toProperties:(id)arg2 index:(unsigned long long)arg3;	// IMP=0x00800000000e75a3
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;	// IMP=0x00800000003e837e

@end

