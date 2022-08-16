//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject

@property (nonatomic, assign, readonly)NSString *startStation;
@property (nonatomic, assign, readonly)NSDate *drivingdate;
@property (nonatomic, assign, readonly)NSString *terminals;
@property (nonatomic, assign, readonly)NSString *Elapsedtime;
@property (nonatomic, assign, readonly)float *money;
@property (nonatomic, assign, readonly)NSString *seats;
@property (nonatomic, strong) Orders *Passenger;

@end

@interface Passenger : Person
// @property 属性
// 是否年满 18 岁
// 历史订单 （数组）
// 未出行订单 （数组）
@property (nonatomic, assign, readonly)BOOL age;
@property (nonatomic, copy) NSArray *historyorder;
@property (nonatomic, copy) NSArray *Noorders;

// Function 方法
// 去订票
- (void)Booking:(NSString *)name idnumeber:(NSNumber *)idnumber;

// 去检票
- (void)Checking:(Orders *)Passenger;

@end

NS_ASSUME_NONNULL_END
