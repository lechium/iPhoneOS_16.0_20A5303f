//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSItemProvider;

__attribute__((visibility("hidden")))
@interface WebItemProviderLoadResult : NSObject
{
    struct RetainPtr<NSMutableDictionary<NSString *, NSURL *>> _fileURLs;	// 8 = 0x8
    struct RetainPtr<NSItemProvider> _itemProvider;	// 16 = 0x10
    struct RetainPtr<NSArray<NSString *>> _typesToLoad;	// 24 = 0x18
}

+ (id)loadResultWithItemProvider:(id)arg1 typesToLoad:(id)arg2;	// IMP=0x0060000002428a80
- (id).cxx_construct;	// IMP=0x0000000002429110
- (void).cxx_destruct;	// IMP=0x00000000024290b0
- (id)description;	// IMP=0x0000000002428c60
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, nonatomic) NSArray *loadedTypeIdentifiers;
@property(readonly, nonatomic) NSArray *loadedFileURLs;
- (void)setFileURL:(id)arg1 forType:(id)arg2;	// IMP=0x0000000002428bf0
- (id)fileURLForType:(id)arg1;	// IMP=0x0000000002428bd0
@property(readonly, nonatomic) NSArray *typesToLoad;
@property(readonly, nonatomic) _Bool canBeRepresentedAsFileUpload;
- (id)initWithItemProvider:(id)arg1 typesToLoad:(id)arg2;	// IMP=0x0000000002428ac0

@end

