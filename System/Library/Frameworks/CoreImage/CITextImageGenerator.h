//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CITextImageGenerator : CIFilter
{
    NSString *inputText;	// 72 = 0x48
    NSString *inputFontName;	// 80 = 0x50
    NSNumber *inputFontSize;	// 88 = 0x58
    NSNumber *inputScaleFactor;	// 96 = 0x60
    NSNumber *inputPadding;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x00600000001737f2
@property(retain, nonatomic) NSNumber *inputPadding; // @synthesize inputPadding;
@property(retain, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property(retain, nonatomic) NSNumber *inputFontSize; // @synthesize inputFontSize;
@property(retain, nonatomic) NSString *inputFontName; // @synthesize inputFontName;
@property(retain, nonatomic) NSString *inputText; // @synthesize inputText;
- (id)outputImage;	// IMP=0x0000000000173b3d

@end
