//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSFileWatcherObservations : NSObject
{
    _Bool _attributesChanged;	// 8 = 0x8
    _Bool _contentsChanged;	// 9 = 0x9
    _Bool _deleted;	// 10 = 0xa
    _Bool _moved;	// 11 = 0xb
    NSString *_lastObservedPath;	// 16 = 0x10
    _Bool _didResetPath;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
}

- (void)notifyObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000000065f0ad
- (id)description;	// IMP=0x000000000065f001
- (void)addAnnouncedMoveToPath:(id)arg1;	// IMP=0x000000000065ef42
- (void)addDetectedMoveToPath:(id)arg1;	// IMP=0x000000000065ee7b
- (void)addDeletion;	// IMP=0x000000000065edeb
- (void)addContentsChange;	// IMP=0x000000000065ed5b
- (void)addAttributeChange;	// IMP=0x000000000065eccb
- (void)dealloc;	// IMP=0x000000000065ec5e
- (id)initWithPath:(id)arg1;	// IMP=0x000000000065ebe4

@end

