//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSFastEnumeration-Protocol.h>
#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXFastEnumeration <NSFastEnumeration, NSObject>
@property(readonly, nonatomic) id firstObject;
@property(readonly) unsigned long long count;

@optional
- (id)copy;
@end
