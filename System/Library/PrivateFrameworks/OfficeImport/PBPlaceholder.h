//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBPlaceholder : NSObject
{
}

+ (void)writePlaceholder:(id)arg1 toPlaceholderAtom:(struct PptOEPlaceholderAtom *)arg2 isMaster:(_Bool)arg3 isNotes:(_Bool)arg4;	// IMP=0x0080000000439322
+ (_Bool)isTitlePlaceholder:(int)arg1;	// IMP=0x008000000043930f
+ (_Bool)isBodyPlaceholder:(int)arg1;	// IMP=0x00800000004392f4
+ (int)placeholderTypeFromTextType:(int)arg1;	// IMP=0x008000000002c9df
+ (int)readPlaceholderOrientation:(int)arg1;	// IMP=0x008000000002d065
+ (int)readPlaceholderSize:(int)arg1;	// IMP=0x008000000002d048
+ (int)readPlaceholderType:(int)arg1;	// IMP=0x008000000002d010

@end
