import 'package:flutter/material.dart';
import 'topButtons.dart';
import 'mainButtons.dart';


class Buttons extends StatelessWidget {
  const Buttons({super.key});

  @override
  Widget build(BuildContext context) {
    return Column(
      mainAxisAlignment: MainAxisAlignment.end,
      children: [
        Row(
          children: [
            Expanded(
              child: Padding(
                padding:
                EdgeInsets.symmetric(horizontal: 8.0, vertical: 16),
                child: TextField(
                  decoration: InputDecoration(
                    border: OutlineInputBorder(),
                    iconColor: Colors.green,
                  ),
                  textAlign: TextAlign.center,
                ),
              ),
            )
          ],
        ),
        SizedBox(height: 30),
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          children: [
            TopButton(text: 'e'),
            TopButton(text: 'µ'),
            TopButton(text: 'sin'),
            TopButton(text: 'deg'),
          ],
        ),
        SizedBox(height: 20),
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          children: [
            MainButton(text: 'Ac'),
            MainButton(icon: Icons.backspace_outlined),
            MainButton(icon: Icons.percent),
            MainButton(text: '÷'),
          ],
        ),
        SizedBox(height: 20),
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          children: [
            MainButton(text: '7'),
            MainButton(text: '8'),
            MainButton(text: '9'),
            MainButton(icon: Icons.clear),
          ],
        ),
        SizedBox(height: 20),
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          children: [
            MainButton(text: '4'),
            MainButton(text: '5'),
            MainButton(text: '6'),
            MainButton(icon: Icons.remove),
          ],
        ),
        SizedBox(height: 20),
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          children: [
            MainButton(text: '1'),
            MainButton(text: '2'),
            MainButton(text: '3'),
            MainButton(icon: Icons.add),
          ],
        ),
        SizedBox(height: 20),
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          children: [
            Container(
              width: 180,
              height: 80,
              child: ElevatedButton(
                onPressed: () {},
                child: Text('0'),
              ),
            ),
            MainButton(text: '.'),
            MainButton(text: '='),
          ],
        ),
        SizedBox(height: 30),
      ],
    );
  }
}
