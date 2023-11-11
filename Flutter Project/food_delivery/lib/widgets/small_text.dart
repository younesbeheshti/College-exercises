import 'package:flutter/material.dart';
import 'package:food_delivery/utils/dimensions.dart';

class SmallText extends StatelessWidget {
  Color? color;
  final String text;
  double size;
  double height;

  SmallText({super.key, 
    this.color = const Color(0xFFccc7c5),
    required this.text,
    this.size = 0,
    this.height = 1.2,
  });

  @override
  Widget build(BuildContext context) {
    return Text(
      text,
      style: TextStyle(
        color: color,
        fontFamily: 'Roboto',
        fontSize: size == 0 ? Dimensions.font12 : size,
        height: height,
      ),
    );
  }
}
