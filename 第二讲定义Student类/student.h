//
//  student.h
//  Student
//
//  Created by Nemo on 2022/7/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Student : NSObject
{
    @public
    // 特征
    NSString *Name;
    NSString *Major;
    int Age;
}

-(void)study:(float)time;
@end


NS_ASSUME_NONNULL_END
