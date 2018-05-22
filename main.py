import tensorflow as tf
from tensorflow.examples.tutorials.mnist import input_data
mnist=input_data.read_data_sets("/tmp/data/",one_hot=True)
n_node_hl1=500
n_node_hl2=500
n_node_hl3=500
n_classes=10
batch_size=100
x=tf.placeholder('float',[None,784])
y=tf.placeholder('float')
def neural_network_model(data):
	hidden_layer_1={'weights':tf.variables(tf.random_mormal([784,n_node_hl1])),'biases':tf.variables(tf.random_normal([n_node_hl1]))}
	hidden_layer_2={'weights':tf.variables(tf.random_normal([n_node_hl1,n_node_hl2])),'biases':tf.variables(tf.random_normal([n_node_hl2]))}
	hidden_layer_3={'weights':tf.variables(tf.random_normal([n_node_hl2,n_node_hl3])),'biases':tf.variables(tf.random_normal([n_node_hl3]))}
	output_layer={'weights':tf.variables(tf.random_normal([n_node_hl3,n_classes])),'biases':tf.variables(tf.random_normal([n_classes]))}

l1=tf.add(tf.matmul(data,hidden_layer_1['weights']),hidden_layer_1['biases'])
l1=tf.nn.relu(l1)
l2=tf.add(tf.matmul(l1,hidden_layer_2['weights']),hidden_layer_2['biases'])
l2=tf.nn.relu(l2)
l3=tf.add(tf.matmul(l2,hidden_layer_3['weights']),hidden_layer_3['biases'])
l3=tf.nn.relu(l3)
output=tf.matmul(l3,output_layer['weights']) + output_layer['biases']
return output

def train_neural_network(data):
	prediction=neural_network_model(x)
	cost=tf.reduce.mean(tf.(tf.nn.softmax_cross_entropy_with_logits(prediction,y))
	optimizer=tf.train.AdamOptimizer().minimize(cost)
	sess=tf.Session()
	sess.run(tf.initialize_all_variables())
	v_epochs=10
for epoch in range(v_epoch):
	epoch_loss=0
	for _ in range(int(mnist.train.num_examples/batch_size)):
	epoch_x,epoch_y=mnist.train.next_batch(batch_size)
	_,c=sess.run([optimizer,cost],feed_dict={x:epoch_x,y:epoch_y}
	epoch_loss +=c
	print('epoch:',epoch,'complete',v_epoch,'epoch_loss:',epoch_loss)
	correct=tf.equal(tf.agmax(prediction,1),tf.agmax(y,1))
	accuracy=tf.reduce_mean(tf.cost(correct,'float'))
	print('accuracy',accuracy.eval({x:mnist.test.images,y:mnist.test.labels}))
train_neural_network(x)

