//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFImage-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFPhotosLibraryImage <SFImage>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(copy, nonatomic) NSArray *peopleInPhoto;
@property(nonatomic) _Bool isSyndicated;
@property(copy, nonatomic) NSString *photoIdentifier;
@end
