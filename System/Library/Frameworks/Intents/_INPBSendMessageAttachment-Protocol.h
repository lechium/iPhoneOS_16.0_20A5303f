//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBFileDataAttachment, _INPBURLValue;

@protocol _INPBSendMessageAttachment <NSObject>
@property(readonly, nonatomic) unsigned long long whichDatasource;
@property(readonly, nonatomic) _Bool hasTypeIdentifier;
@property(copy, nonatomic) NSString *typeIdentifier;
@property(readonly, nonatomic) _Bool hasSpeechDataURL;
@property(retain, nonatomic) _INPBURLValue *speechDataURL;
@property(readonly, nonatomic) _Bool hasSharedLink;
@property(retain, nonatomic) _INPBURLValue *sharedLink;
@property(readonly, nonatomic) _Bool hasPhAssetId;
@property(copy, nonatomic) NSString *phAssetId;
@property(readonly, nonatomic) _Bool hasFileURL;
@property(retain, nonatomic) _INPBURLValue *fileURL;
@property(readonly, nonatomic) _Bool hasFile;
@property(retain, nonatomic) _INPBFileDataAttachment *file;
@property(readonly, nonatomic) _Bool hasCurrentLocation;
@property(nonatomic) _Bool currentLocation;
@property(readonly, nonatomic) _Bool hasAudioMessageFileURL;
@property(retain, nonatomic) _INPBURLValue *audioMessageFileURL;
@property(readonly, nonatomic) _Bool hasAudioMessageFile;
@property(retain, nonatomic) _INPBFileDataAttachment *audioMessageFile;
@end
