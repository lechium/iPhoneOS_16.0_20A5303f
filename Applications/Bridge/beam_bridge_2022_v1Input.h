//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet;

@interface beam_bridge_2022_v1Input : NSObject
{
    struct __CVBuffer *_image_Placeholder;	// 8 = 0x8
}

@property(nonatomic) struct __CVBuffer *image_Placeholder; // @synthesize image_Placeholder=_image_Placeholder;
- (id)featureValueForName:(id)arg1;	// IMP=0x001000000012d4b7
@property(readonly, nonatomic) NSSet *featureNames;
- (_Bool)setImage_PlaceholderWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012d373
- (MISSING_TYPE *)setImage_PlaceholderWithCGImage:error: /* Error: Ran out of types for this method. */;	// IMP=0x001000000012d25e
- (id)initWithImage_PlaceholderAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012d13b
- (id)initWithImage_PlaceholderFromCGImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x001000000012d03d
- (void)dealloc;	// IMP=0x001000000012d003
- (id)initWithImage_Placeholder:(struct __CVBuffer *)arg1;	// IMP=0x001000000012cfb4

@end

