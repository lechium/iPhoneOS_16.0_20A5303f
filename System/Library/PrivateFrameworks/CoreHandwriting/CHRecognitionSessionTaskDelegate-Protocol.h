//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHandwriting/NSObject-Protocol.h>

@class CHTextCorrectionRecognizer, NSArray, NSLocale;
@protocol CHRecognizing;

@protocol CHRecognitionSessionTaskDelegate <NSObject>
- (CHTextCorrectionRecognizer *)textCorrectionRecognizerForLocales:(NSArray *)arg1;
- (id <CHRecognizing>)recognizerForLocale:(NSLocale *)arg1;
@end
