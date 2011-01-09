/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface GMMMapPoint : NSObject <GMMReadWriteStream>
{
    NSInteger _latitude;
    BOOL _hasLatitude;
    NSInteger _longitude;
    BOOL _hasLongitude;
}

@property BOOL hasLongitude; /* unknown property attribute: V_hasLongitude */
@property NSInteger longitude; /* unknown property attribute: V_longitude */
@property BOOL hasLatitude; /* unknown property attribute: V_hasLatitude */
@property NSInteger latitude; /* unknown property attribute: V_latitude */

+ (id)mapPointWithCoordinate:(struct { double x1; double x2; })arg1;

- (id)init;
- (void)dealloc;
- (void)setLatitude:(NSInteger)arg1;
- (void)setLongitude:(NSInteger)arg1;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */

- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;
- (BOOL)hasLongitude;
- (void)setHasLongitude:(BOOL)arg1;
- (NSInteger)longitude;
- (BOOL)hasLatitude;
- (void)setHasLatitude:(BOOL)arg1;
- (NSInteger)latitude;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithOldMapPoint:(struct MapPoint { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; }*)arg1;
- (struct { double x1; double x2; })coordinate;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end