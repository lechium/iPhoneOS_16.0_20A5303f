//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImage.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface _UIMappedBitmapImage : UIImage
{
    NSData *_data;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000008aaed6
+ (void)initialize;	// IMP=0x00600000008aae4a
- (void).cxx_destruct;	// IMP=0x00000000008ab189
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned long long)hash;	// IMP=0x00000000008ab133
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008ab052
- (void)_configureImage:(id)arg1 assumePreconfigured:(_Bool)arg2;	// IMP=0x00000000008aafad
- (void)_preheatBitmapData;	// IMP=0x00000000008aaede

@end
