//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SectionHeaderOutlineCellAccessoryDelegate;

@interface SectionHeaderOutlineCellAccessoryModel : NSObject
{
    long long _visibility;	// 8 = 0x8
    long long _accessoryType;	// 16 = 0x10
    id <SectionHeaderOutlineCellAccessoryDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000b77d74
@property(readonly, nonatomic) __weak id <SectionHeaderOutlineCellAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(readonly, nonatomic) long long visibility; // @synthesize visibility=_visibility;
- (id)createAccessoryConfigurationWithActionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000b77c53
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000b77b1e
- (unsigned long long)hash;	// IMP=0x0010000000b77b10
- (id)initWithAccessoryType:(long long)arg1 visibility:(long long)arg2 delegate:(id)arg3;	// IMP=0x0010000000b77a96

@end
