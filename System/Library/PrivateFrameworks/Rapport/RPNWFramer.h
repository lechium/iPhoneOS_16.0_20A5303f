//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface RPNWFramer : NSObject
{
}

+ (void)writeErrorOnFramer:(id)arg1 error:(unsigned char)arg2;	// IMP=0x0080000000004916
+ (void)startConnection:(id)arg1;	// IMP=0x008000000000488e
+ (_Bool)writeDataOnFramer:(id)arg1 data:(id)arg2;	// IMP=0x0080000000004661
+ (_Bool)writeControlOnFramer:(id)arg1 type:(int)arg2 error:(unsigned char)arg3;	// IMP=0x00800000000044ff

@end

