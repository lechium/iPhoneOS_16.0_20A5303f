//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMGpsOdometerEntry : NSObject
{
    struct CLOdometerEntry gpsOdomEntry;	// 8 = 0x8
}

- (struct CLOdometerEntry)gpsOdomEntry;	// IMP=0x002000000083972a
- (double)dist;	// IMP=0x001000000083971f
- (id)date;	// IMP=0x00100000008396fe
- (id)initWithOdometerEntry:(struct CLOdometerEntry)arg1;	// IMP=0x00100000008396ad

@end
