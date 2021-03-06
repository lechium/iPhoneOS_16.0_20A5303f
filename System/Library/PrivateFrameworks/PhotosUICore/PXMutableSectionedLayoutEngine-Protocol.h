//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableLayoutEngine-Protocol.h>

@protocol PXSectionedLayoutDataSourceChangeDetails, PXSectionedLayoutEngineDataSourceSnapshot, PXSectionedLayoutItem;

@protocol PXMutableSectionedLayoutEngine <PXMutableLayoutEngine>
@property(nonatomic) struct CGSize seedSize;
@property(retain, nonatomic) id <PXSectionedLayoutItem> seedItem;
- (void)setDataSourceSnapshot:(id <PXSectionedLayoutEngineDataSourceSnapshot>)arg1 withChangeDetails:(id <PXSectionedLayoutDataSourceChangeDetails>)arg2;
@end

