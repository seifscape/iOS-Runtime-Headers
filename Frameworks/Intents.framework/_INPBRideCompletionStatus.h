/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideCompletionStatus : PBCodable <NSCopying> {
    BOOL  _canceled;
    BOOL  _canceledByService;
    BOOL  _completed;
    _INPBUserActivity * _completionUserActivity;
    struct { 
        unsigned int canceled : 1; 
        unsigned int canceledByService : 1; 
        unsigned int completed : 1; 
        unsigned int missedPickup : 1; 
        unsigned int outstanding : 1; 
    }  _has;
    BOOL  _missedPickup;
    BOOL  _outstanding;
    _INPBCurrencyAmountValue * _paymentAmount;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) BOOL canceled;
@property (nonatomic) BOOL canceledByService;
@property (nonatomic) BOOL completed;
@property (nonatomic, retain) _INPBUserActivity *completionUserActivity;
@property (nonatomic) BOOL hasCanceled;
@property (nonatomic) BOOL hasCanceledByService;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic, readonly) BOOL hasCompletionUserActivity;
@property (nonatomic) BOOL hasMissedPickup;
@property (nonatomic) BOOL hasOutstanding;
@property (nonatomic, readonly) BOOL hasPaymentAmount;
@property (nonatomic) BOOL missedPickup;
@property (nonatomic) BOOL outstanding;
@property (nonatomic, retain) _INPBCurrencyAmountValue *paymentAmount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (BOOL)canceled;
- (BOOL)canceledByService;
- (BOOL)completed;
- (id)completionUserActivity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCanceled;
- (BOOL)hasCanceledByService;
- (BOOL)hasCompleted;
- (BOOL)hasCompletionUserActivity;
- (BOOL)hasMissedPickup;
- (BOOL)hasOutstanding;
- (BOOL)hasPaymentAmount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)missedPickup;
- (BOOL)outstanding;
- (id)paymentAmount;
- (BOOL)readFrom:(id)arg1;
- (void)setCanceled:(BOOL)arg1;
- (void)setCanceledByService:(BOOL)arg1;
- (void)setCompleted:(BOOL)arg1;
- (void)setCompletionUserActivity:(id)arg1;
- (void)setHasCanceled:(BOOL)arg1;
- (void)setHasCanceledByService:(BOOL)arg1;
- (void)setHasCompleted:(BOOL)arg1;
- (void)setHasMissedPickup:(BOOL)arg1;
- (void)setHasOutstanding:(BOOL)arg1;
- (void)setMissedPickup:(BOOL)arg1;
- (void)setOutstanding:(BOOL)arg1;
- (void)setPaymentAmount:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
