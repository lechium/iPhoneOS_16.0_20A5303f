//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIRemoteViewService.h"

@class NSExtension, NSUUID;
@protocol PKPlugIn;

__attribute__((visibility("hidden")))
@interface _UIConcreteRemoteViewService : _UIRemoteViewService
{
    _Bool _overridesHostAppearance;	// 8 = 0x8
    NSUUID *_contextToken;	// 16 = 0x10
    NSExtension *_extension;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000012b1b9d
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (_Bool)overridesHostAppearance;	// IMP=0x00000000012b1b68
- (id)contextToken;	// IMP=0x00000000012b1b57
- (void)endUsing:(CDUnknownBlockType)arg1;	// IMP=0x00000000012b1ae5
- (void)beginUsing:(CDUnknownBlockType)arg1;	// IMP=0x00000000012b1a73
- (id)viewControllerClassName;	// IMP=0x00000000012b190e
- (int)processIdentifier;	// IMP=0x00000000012b189a
- (id)multipleInstanceUUID;	// IMP=0x00000000012b184a
- (_Bool)multipleInstances;	// IMP=0x00000000012b1788
- (id)xpcServiceNameRoot;	// IMP=0x00000000012b16bd
- (id)identifier;	// IMP=0x00000000012b166d
@property(retain, nonatomic) id <PKPlugIn> plugin;
- (void)updateOverridesHostAppearance;	// IMP=0x00000000012b154c
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;	// IMP=0x00000000012b1486

@end
