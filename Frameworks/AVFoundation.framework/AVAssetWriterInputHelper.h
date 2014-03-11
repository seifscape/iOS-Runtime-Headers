/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputConfigurationState, AVOutputSettings, AVWeakReference, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInputHelper : NSObject {
    AVAssetWriterInputConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriterInput;
}

@property short alternateGroupID;
@property(readonly) AVAssetWriterInputConfigurationState * configurationState;
@property BOOL expectsMediaDataInRealTime;
@property(copy) NSString * extendedLanguageTag;
@property(copy) NSString * languageCode;
@property int layer;
@property BOOL marksOutputTrackAsEnabled;
@property int mediaTimeScale;
@property(readonly) NSString * mediaType;
@property(copy) NSArray * metadata;
@property struct CGSize { float x1; float x2; } naturalSize;
@property(readonly) AVOutputSettings * outputSettings;
@property(readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property float preferredVolume;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property(readonly) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property(copy) NSDictionary * sourcePixelBufferAttributes;
@property(readonly) int status;
@property(readonly) int trackID;
@property(readonly) NSDictionary * trackReferences;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;
@property(retain) AVWeakReference * weakReferenceToAssetWriterInput;

- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (short)alternateGroupID;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (id)configurationState;
- (void)dealloc;
- (BOOL)expectsMediaDataInRealTime;
- (id)extendedLanguageTag;
- (id)initWithConfigurationState:(id)arg1;
- (BOOL)isReadyForMoreMediaData;
- (id)languageCode;
- (int)layer;
- (void)markAsFinished;
- (BOOL)marksOutputTrackAsEnabled;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadata;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)outputSettings;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (float)preferredVolume;
- (void)prepareToEndSession;
- (BOOL)prepareToFinishWritingReturningError:(id*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (void)setAlternateGroupID:(short)arg1;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(int)arg1;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setWeakReferenceToAssetWriterInput:(id)arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)sourcePixelBufferAttributes;
- (int)status;
- (int)trackID;
- (id)trackReferences;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg1;
- (id)weakReferenceToAssetWriterInput;

@end