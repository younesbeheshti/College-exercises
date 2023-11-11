import 'package:flutter/material.dart';

class MainButton extends StatelessWidget {
  final String? text;
  final IconData? icon;

  const MainButton({
    super.key,
    this.text,
    this.icon,
  });

  @override
  Widget build(BuildContext context) {
    return Container(
      width: 80.0,
      height: 80.0,
      child: ElevatedButton(
        onPressed: () {
        },
        child: icon != null ? Icon(icon) : Text(text!),
      ),
    );
  }
}
