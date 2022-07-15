//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, OADColorMap, OADColorScheme, OCDDocument;

__attribute__((visibility("hidden")))
@interface CMState : NSObject
{
    OCDDocument *_document;	// 8 = 0x8
    NSMutableDictionary *components;	// 16 = 0x10
    NSMutableDictionary *htmlResource;	// 24 = 0x18
    NSString *mResourceUrlPrefix;	// 32 = 0x20
    OADColorMap *mColorMap;	// 40 = 0x28
    OADColorScheme *mColorScheme;	// 48 = 0x30
    id mResources;	// 56 = 0x38
    unsigned long long mSourceFormat;	// 64 = 0x40
    _Bool mIsThumbnail;	// 72 = 0x48
    _Bool mIsOnPhone;	// 73 = 0x49
    long long _textLevel;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000467bae
@property(retain) OCDDocument *document; // @synthesize document=_document;
@property unsigned long long sourceFormat; // @synthesize sourceFormat=mSourceFormat;
@property(retain) id resources; // @synthesize resources=mResources;
@property(retain) OADColorScheme *colorScheme; // @synthesize colorScheme=mColorScheme;
@property(retain) OADColorMap *colorMap; // @synthesize colorMap=mColorMap;
- (long long)textLevel;	// IMP=0x0000000000467b77
- (void)popTextLevel;	// IMP=0x00000000000fc015
- (void)pushTextLevel;	// IMP=0x00000000000f7e9b
@property _Bool isOnPhone; // @synthesize isOnPhone=mIsOnPhone;
@property _Bool isThumbnail; // @synthesize isThumbnail=mIsThumbnail;
- (_Bool)isOffice12;	// IMP=0x0000000000187856
- (void)copyFromCMStateWithoutComponents:(id)arg1;	// IMP=0x00000000001ed1e8
- (id)getHtmlResource;	// IMP=0x00000000001ed2f5
- (void)setHtmlResource:(id)arg1;	// IMP=0x00000000001ed303
- (id)resourceUrlPrefix;	// IMP=0x00000000001ed314
- (void)setResourceUrlPrefix:(id)arg1;	// IMP=0x0000000000467b5d
- (void)setComponentWithName:(id)arg1 value:(id)arg2;	// IMP=0x0000000000467b3e
- (id)componentByName:(id)arg1;	// IMP=0x0000000000467b18
- (id)init;	// IMP=0x0000000000039d83

@end
