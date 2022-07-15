//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsArticles/NSObject-Protocol.h>

@class NSString, SXComponents;
@protocol SXAutoPlacement, SXComponent, SXComponentLayout, SXComponentStyle, SXDocumentStyle, SXImageResource, SXResource;

@protocol SXDOMObjectProviding <NSObject>
- (id <SXImageResource>)imageResourceForIdentifier:(NSString *)arg1;
- (id <SXResource>)resourceForIdentifier:(NSString *)arg1;
- (id <SXComponentStyle>)componentStyleForComponent:(id <SXComponent>)arg1;
- (id <SXComponentLayout>)componentLayoutForIdentifier:(NSString *)arg1;
@property(nonatomic, readonly) id <SXAutoPlacement> autoPlacement;
@property(nonatomic, readonly) SXComponents *components;
@property(nonatomic, readonly) id <SXDocumentStyle> documentStyle;
@end
